/* ConfigDelete.c generated by valac 0.16.1, the Vala compiler
 * generated from ConfigDelete.vala, do not modify */

/* -*- Mode: Vala; indent-tabs-mode: nil; tab-width: 2 -*- */
/*
    This file is part of Déjà Dup.
    For copyright information, see AUTHORS.

    Déjà Dup is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Déjà Dup is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Déjà Dup.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <common.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <config.h>


#define DEJA_DUP_TYPE_CONFIG_WIDGET (deja_dup_config_widget_get_type ())
#define DEJA_DUP_CONFIG_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidget))
#define DEJA_DUP_CONFIG_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidgetClass))
#define DEJA_DUP_IS_CONFIG_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET))
#define DEJA_DUP_IS_CONFIG_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_WIDGET))
#define DEJA_DUP_CONFIG_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidgetClass))

typedef struct _DejaDupConfigWidget DejaDupConfigWidget;
typedef struct _DejaDupConfigWidgetClass DejaDupConfigWidgetClass;
typedef struct _DejaDupConfigWidgetPrivate DejaDupConfigWidgetPrivate;

#define DEJA_DUP_TYPE_CONFIG_CHOICE (deja_dup_config_choice_get_type ())
#define DEJA_DUP_CONFIG_CHOICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_CHOICE, DejaDupConfigChoice))
#define DEJA_DUP_CONFIG_CHOICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_CHOICE, DejaDupConfigChoiceClass))
#define DEJA_DUP_IS_CONFIG_CHOICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_CHOICE))
#define DEJA_DUP_IS_CONFIG_CHOICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_CHOICE))
#define DEJA_DUP_CONFIG_CHOICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_CHOICE, DejaDupConfigChoiceClass))

typedef struct _DejaDupConfigChoice DejaDupConfigChoice;
typedef struct _DejaDupConfigChoiceClass DejaDupConfigChoiceClass;
typedef struct _DejaDupConfigChoicePrivate DejaDupConfigChoicePrivate;

#define DEJA_DUP_TYPE_CONFIG_DELETE (deja_dup_config_delete_get_type ())
#define DEJA_DUP_CONFIG_DELETE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_DELETE, DejaDupConfigDelete))
#define DEJA_DUP_CONFIG_DELETE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_DELETE, DejaDupConfigDeleteClass))
#define DEJA_DUP_IS_CONFIG_DELETE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_DELETE))
#define DEJA_DUP_IS_CONFIG_DELETE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_DELETE))
#define DEJA_DUP_CONFIG_DELETE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_DELETE, DejaDupConfigDeleteClass))

typedef struct _DejaDupConfigDelete DejaDupConfigDelete;
typedef struct _DejaDupConfigDeleteClass DejaDupConfigDeleteClass;
typedef struct _DejaDupConfigDeletePrivate DejaDupConfigDeletePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define __vala_GValue_free0(var) ((var == NULL) ? NULL : (var = (_vala_GValue_free (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _DejaDupConfigDeleteSetFromConfigData DejaDupConfigDeleteSetFromConfigData;

struct _DejaDupConfigWidget {
	GtkEventBox parent_instance;
	DejaDupConfigWidgetPrivate * priv;
	gboolean syncing;
	DejaDupSimpleSettings* settings;
	GList* all_settings;
};

struct _DejaDupConfigWidgetClass {
	GtkEventBoxClass parent_class;
	void (*set_from_config) (DejaDupConfigWidget* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*set_from_config_finish) (DejaDupConfigWidget* self, GAsyncResult* _res_);
};

struct _DejaDupConfigChoice {
	DejaDupConfigWidget parent_instance;
	DejaDupConfigChoicePrivate * priv;
	GtkComboBox* combo;
	gchar* default_val;
	gint settings_col;
};

struct _DejaDupConfigChoiceClass {
	DejaDupConfigWidgetClass parent_class;
	void (*handle_changed) (DejaDupConfigChoice* self);
};

struct _DejaDupConfigDelete {
	DejaDupConfigChoice parent_instance;
	DejaDupConfigDeletePrivate * priv;
};

struct _DejaDupConfigDeleteClass {
	DejaDupConfigChoiceClass parent_class;
};

struct _DejaDupConfigDeleteSetFromConfigData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	DejaDupConfigDelete* self;
	DejaDupSimpleSettings* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	gint _tmp3_;
	gint confval;
	gint _tmp4_;
	gint _tmp5_;
	gboolean valid;
	GtkTreeIter iter;
	GtkComboBox* _tmp6_;
	GtkTreeModel* _tmp7_;
	GtkTreeModel* _tmp8_;
	GtkTreeIter _tmp9_;
	gboolean _tmp10_;
	gboolean _tmp11_;
	GValue val;
	GtkComboBox* _tmp12_;
	GtkTreeModel* _tmp13_;
	GtkTreeModel* _tmp14_;
	GtkTreeIter _tmp15_;
	gint _tmp16_;
	GValue _tmp17_;
	gint _tmp18_;
	gint intval;
	gint _tmp19_;
	gint _tmp20_;
	GtkComboBox* _tmp21_;
	GtkTreeIter _tmp22_;
	GtkComboBox* _tmp23_;
	GtkTreeModel* _tmp24_;
	GtkTreeModel* _tmp25_;
	gboolean _tmp26_;
	gboolean _tmp27_;
	GtkComboBox* _tmp28_;
	GtkTreeModel* _tmp29_;
	GtkTreeModel* _tmp30_;
	GtkListStore* _tmp31_;
	GtkListStore* store;
	GtkListStore* _tmp32_;
	gint _tmp33_;
	const gchar* _tmp34_;
	gint _tmp35_;
	gchar* _tmp36_;
	gchar* _tmp37_;
	gint _tmp38_;
	GtkTreeIter _tmp39_;
	GtkComboBox* _tmp40_;
	GtkTreeIter _tmp41_;
};


static gpointer deja_dup_config_delete_parent_class = NULL;
extern gint deja_dup_config_delete_FOREVER;
gint deja_dup_config_delete_FOREVER = 0;

GType deja_dup_config_widget_get_type (void) G_GNUC_CONST;
GType deja_dup_config_choice_get_type (void) G_GNUC_CONST;
GType deja_dup_config_delete_get_type (void) G_GNUC_CONST;
enum  {
	DEJA_DUP_CONFIG_DELETE_DUMMY_PROPERTY
};
#define DEJA_DUP_CONFIG_DELETE_SEMIANNUALLY (365 / 2)
#define DEJA_DUP_CONFIG_DELETE_ANNUALLY 365
DejaDupConfigDelete* deja_dup_config_delete_new (const gchar* key, const gchar* ns);
DejaDupConfigDelete* deja_dup_config_delete_construct (GType object_type, const gchar* key, const gchar* ns);
static void deja_dup_config_delete_real_handle_changed (DejaDupConfigChoice* base);
GValue* deja_dup_config_choice_get_current_value (DejaDupConfigChoice* self);
const gchar* deja_dup_config_widget_get_key (DejaDupConfigWidget* self);
static void _vala_GValue_free (GValue* self);
static void deja_dup_config_delete_real_set_from_config_data_free (gpointer _data);
static void deja_dup_config_delete_real_set_from_config (DejaDupConfigWidget* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean deja_dup_config_delete_real_set_from_config_co (DejaDupConfigDeleteSetFromConfigData* _data_);
static GObject * deja_dup_config_delete_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
void deja_dup_config_choice_init (DejaDupConfigChoice* self, GtkTreeModel* model, gint settings_col);
static void deja_dup_config_delete_finalize (GObject* obj);


DejaDupConfigDelete* deja_dup_config_delete_construct (GType object_type, const gchar* key, const gchar* ns) {
	DejaDupConfigDelete * self = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	g_return_val_if_fail (key != NULL, NULL);
	g_return_val_if_fail (ns != NULL, NULL);
	_tmp0_ = key;
	_tmp1_ = ns;
	self = (DejaDupConfigDelete*) g_object_new (object_type, "key", _tmp0_, "ns", _tmp1_, NULL);
	return self;
}


DejaDupConfigDelete* deja_dup_config_delete_new (const gchar* key, const gchar* ns) {
	return deja_dup_config_delete_construct (DEJA_DUP_TYPE_CONFIG_DELETE, key, ns);
}


static void _vala_GValue_free (GValue* self) {
	g_value_unset (self);
	g_free (self);
}


static void deja_dup_config_delete_real_handle_changed (DejaDupConfigChoice* base) {
	DejaDupConfigDelete * self;
	GValue* _tmp0_ = NULL;
	GValue* val;
	gint _tmp1_ = 0;
	GValue* _tmp2_;
	gint _tmp5_;
	gint intval;
	gint _tmp6_;
	gint _tmp7_;
	DejaDupSimpleSettings* _tmp8_;
	const gchar* _tmp9_;
	const gchar* _tmp10_;
	gint _tmp11_;
	gint _tmp12_;
	gchar* _tmp13_ = NULL;
	gchar* _tmp14_;
	self = (DejaDupConfigDelete*) base;
	_tmp0_ = deja_dup_config_choice_get_current_value ((DejaDupConfigChoice*) self);
	val = _tmp0_;
	_tmp2_ = val;
	if (_tmp2_ == NULL) {
		_tmp1_ = 0;
	} else {
		GValue* _tmp3_;
		gint _tmp4_ = 0;
		_tmp3_ = val;
		_tmp4_ = g_value_get_int (_tmp3_);
		_tmp1_ = _tmp4_;
	}
	_tmp5_ = _tmp1_;
	intval = _tmp5_;
	_tmp6_ = intval;
	_tmp7_ = G_MAXINT;
	if (_tmp6_ == _tmp7_) {
		intval = 0;
	}
	_tmp8_ = ((DejaDupConfigWidget*) self)->settings;
	_tmp9_ = deja_dup_config_widget_get_key ((DejaDupConfigWidget*) self);
	_tmp10_ = _tmp9_;
	_tmp11_ = intval;
	deja_dup_simple_settings_set_int (_tmp8_, _tmp10_, _tmp11_);
	_tmp12_ = intval;
	_tmp13_ = g_strdup_printf ("%i", _tmp12_);
	_tmp14_ = _tmp13_;
	g_signal_emit_by_name ((DejaDupConfigChoice*) self, "choice-changed", _tmp14_);
	_g_free0 (_tmp14_);
	__vala_GValue_free0 (val);
}


static void deja_dup_config_delete_real_set_from_config_data_free (gpointer _data) {
	DejaDupConfigDeleteSetFromConfigData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (DejaDupConfigDeleteSetFromConfigData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void deja_dup_config_delete_real_set_from_config (DejaDupConfigWidget* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	DejaDupConfigDelete * self;
	DejaDupConfigDeleteSetFromConfigData* _data_;
	DejaDupConfigDelete* _tmp0_;
	self = (DejaDupConfigDelete*) base;
	_data_ = g_slice_new0 (DejaDupConfigDeleteSetFromConfigData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, deja_dup_config_delete_real_set_from_config);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, deja_dup_config_delete_real_set_from_config_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	deja_dup_config_delete_real_set_from_config_co (_data_);
}


static void deja_dup_config_delete_real_set_from_config_finish (DejaDupConfigWidget* base, GAsyncResult* _res_) {
	DejaDupConfigDeleteSetFromConfigData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean deja_dup_config_delete_real_set_from_config_co (DejaDupConfigDeleteSetFromConfigData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = ((DejaDupConfigWidget*) _data_->self)->settings;
	_data_->_tmp1_ = deja_dup_config_widget_get_key ((DejaDupConfigWidget*) _data_->self);
	_data_->_tmp2_ = _data_->_tmp1_;
	_data_->_tmp3_ = 0;
	_data_->_tmp3_ = g_settings_get_int ((GSettings*) _data_->_tmp0_, _data_->_tmp2_);
	_data_->confval = _data_->_tmp3_;
	_data_->_tmp4_ = _data_->confval;
	if (_data_->_tmp4_ <= 0) {
		_data_->_tmp5_ = G_MAXINT;
		_data_->confval = _data_->_tmp5_;
	}
	_data_->_tmp6_ = ((DejaDupConfigChoice*) _data_->self)->combo;
	_data_->_tmp7_ = gtk_combo_box_get_model (_data_->_tmp6_);
	_data_->_tmp8_ = _data_->_tmp7_;
	memset (&_data_->_tmp9_, 0, sizeof (GtkTreeIter));
	_data_->_tmp10_ = FALSE;
	_data_->_tmp10_ = gtk_tree_model_get_iter_first (_data_->_tmp8_, &_data_->_tmp9_);
	_data_->iter = _data_->_tmp9_;
	_data_->valid = _data_->_tmp10_;
	while (TRUE) {
		_data_->_tmp11_ = _data_->valid;
		if (!_data_->_tmp11_) {
			break;
		}
		_data_->_tmp12_ = ((DejaDupConfigChoice*) _data_->self)->combo;
		_data_->_tmp13_ = gtk_combo_box_get_model (_data_->_tmp12_);
		_data_->_tmp14_ = _data_->_tmp13_;
		_data_->_tmp15_ = _data_->iter;
		_data_->_tmp16_ = ((DejaDupConfigChoice*) _data_->self)->settings_col;
		memset (&_data_->_tmp17_, 0, sizeof (GValue));
		gtk_tree_model_get_value (_data_->_tmp14_, &_data_->_tmp15_, _data_->_tmp16_, &_data_->_tmp17_);
		G_IS_VALUE (&_data_->val) ? (g_value_unset (&_data_->val), NULL) : NULL;
		_data_->val = _data_->_tmp17_;
		_data_->_tmp18_ = 0;
		_data_->_tmp18_ = g_value_get_int (&_data_->val);
		_data_->intval = _data_->_tmp18_;
		_data_->_tmp19_ = _data_->intval;
		_data_->_tmp20_ = _data_->confval;
		if (_data_->_tmp19_ == _data_->_tmp20_) {
			_data_->_tmp21_ = ((DejaDupConfigChoice*) _data_->self)->combo;
			_data_->_tmp22_ = _data_->iter;
			gtk_combo_box_set_active_iter (_data_->_tmp21_, &_data_->_tmp22_);
			G_IS_VALUE (&_data_->val) ? (g_value_unset (&_data_->val), NULL) : NULL;
			break;
		}
		_data_->_tmp23_ = ((DejaDupConfigChoice*) _data_->self)->combo;
		_data_->_tmp24_ = gtk_combo_box_get_model (_data_->_tmp23_);
		_data_->_tmp25_ = _data_->_tmp24_;
		_data_->_tmp26_ = FALSE;
		_data_->_tmp26_ = gtk_tree_model_iter_next (_data_->_tmp25_, &_data_->iter);
		_data_->valid = _data_->_tmp26_;
		G_IS_VALUE (&_data_->val) ? (g_value_unset (&_data_->val), NULL) : NULL;
	}
	_data_->_tmp27_ = _data_->valid;
	if (!_data_->_tmp27_) {
		_data_->_tmp28_ = ((DejaDupConfigChoice*) _data_->self)->combo;
		_data_->_tmp29_ = gtk_combo_box_get_model (_data_->_tmp28_);
		_data_->_tmp30_ = _data_->_tmp29_;
		_data_->_tmp31_ = _g_object_ref0 (GTK_LIST_STORE (_data_->_tmp30_));
		_data_->store = _data_->_tmp31_;
		_data_->_tmp32_ = _data_->store;
		_data_->_tmp33_ = _data_->confval;
		_data_->_tmp34_ = NULL;
		_data_->_tmp34_ = g_dngettext (GETTEXT_PACKAGE, "At least %d day", "At least %d days", (gulong) _data_->_tmp33_);
		_data_->_tmp35_ = _data_->confval;
		_data_->_tmp36_ = NULL;
		_data_->_tmp36_ = g_strdup_printf (_data_->_tmp34_, _data_->_tmp35_);
		_data_->_tmp37_ = _data_->_tmp36_;
		_data_->_tmp38_ = _data_->confval;
		memset (&_data_->_tmp39_, 0, sizeof (GtkTreeIter));
		gtk_list_store_insert_with_values (_data_->_tmp32_, &_data_->_tmp39_, 0, 0, _data_->_tmp37_, 1, _data_->_tmp38_, -1);
		_data_->iter = _data_->_tmp39_;
		_g_free0 (_data_->_tmp37_);
		_data_->_tmp40_ = ((DejaDupConfigChoice*) _data_->self)->combo;
		_data_->_tmp41_ = _data_->iter;
		gtk_combo_box_set_active_iter (_data_->_tmp40_, &_data_->_tmp41_);
		_g_object_unref0 (_data_->store);
	}
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static GObject * deja_dup_config_delete_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	DejaDupConfigDelete * self;
	GtkListStore* _tmp0_;
	GtkListStore* store;
	GtkTreeIter iter = {0};
	gint i;
	GtkListStore* _tmp1_;
	gint _tmp2_;
	const gchar* _tmp3_ = NULL;
	GtkTreeIter _tmp4_ = {0};
	GtkListStore* _tmp5_;
	gint _tmp6_;
	const gchar* _tmp7_ = NULL;
	GtkTreeIter _tmp8_ = {0};
	GtkListStore* _tmp9_;
	gint _tmp10_;
	const gchar* _tmp11_ = NULL;
	gint _tmp12_;
	GtkTreeIter _tmp13_ = {0};
	GtkListStore* _tmp14_;
	GtkListStore* _tmp15_;
	parent_class = G_OBJECT_CLASS (deja_dup_config_delete_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = DEJA_DUP_CONFIG_DELETE (obj);
	_tmp0_ = gtk_list_store_new (2, G_TYPE_STRING, G_TYPE_INT);
	store = _tmp0_;
	i = 0;
	_tmp1_ = store;
	_tmp2_ = i;
	i = _tmp2_ + 1;
	_tmp3_ = _ ("At least six months");
	gtk_list_store_insert_with_values (_tmp1_, &_tmp4_, _tmp2_, 0, _tmp3_, 1, DEJA_DUP_CONFIG_DELETE_SEMIANNUALLY, -1);
	iter = _tmp4_;
	_tmp5_ = store;
	_tmp6_ = i;
	i = _tmp6_ + 1;
	_tmp7_ = _ ("At least a year");
	gtk_list_store_insert_with_values (_tmp5_, &_tmp8_, _tmp6_, 0, _tmp7_, 1, DEJA_DUP_CONFIG_DELETE_ANNUALLY, -1);
	iter = _tmp8_;
	_tmp9_ = store;
	_tmp10_ = i;
	i = _tmp10_ + 1;
	_tmp11_ = _ ("Forever");
	_tmp12_ = deja_dup_config_delete_FOREVER;
	gtk_list_store_insert_with_values (_tmp9_, &_tmp13_, _tmp10_, 0, _tmp11_, 1, _tmp12_, -1);
	iter = _tmp13_;
	_tmp14_ = store;
	gtk_tree_sortable_set_sort_column_id ((GtkTreeSortable*) _tmp14_, 1, GTK_SORT_ASCENDING);
	_tmp15_ = store;
	deja_dup_config_choice_init ((DejaDupConfigChoice*) self, (GtkTreeModel*) _tmp15_, 1);
	_g_object_unref0 (store);
	return obj;
}


static void deja_dup_config_delete_class_init (DejaDupConfigDeleteClass * klass) {
	gint _tmp0_;
	deja_dup_config_delete_parent_class = g_type_class_peek_parent (klass);
	DEJA_DUP_CONFIG_CHOICE_CLASS (klass)->handle_changed = deja_dup_config_delete_real_handle_changed;
	DEJA_DUP_CONFIG_WIDGET_CLASS (klass)->set_from_config = deja_dup_config_delete_real_set_from_config;
	DEJA_DUP_CONFIG_WIDGET_CLASS (klass)->set_from_config_finish = deja_dup_config_delete_real_set_from_config_finish;
	G_OBJECT_CLASS (klass)->constructor = deja_dup_config_delete_constructor;
	G_OBJECT_CLASS (klass)->finalize = deja_dup_config_delete_finalize;
	_tmp0_ = G_MAXINT;
	deja_dup_config_delete_FOREVER = _tmp0_;
}


static void deja_dup_config_delete_instance_init (DejaDupConfigDelete * self) {
}


static void deja_dup_config_delete_finalize (GObject* obj) {
	DejaDupConfigDelete * self;
	self = DEJA_DUP_CONFIG_DELETE (obj);
	G_OBJECT_CLASS (deja_dup_config_delete_parent_class)->finalize (obj);
}


GType deja_dup_config_delete_get_type (void) {
	static volatile gsize deja_dup_config_delete_type_id__volatile = 0;
	if (g_once_init_enter (&deja_dup_config_delete_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DejaDupConfigDeleteClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) deja_dup_config_delete_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DejaDupConfigDelete), 0, (GInstanceInitFunc) deja_dup_config_delete_instance_init, NULL };
		GType deja_dup_config_delete_type_id;
		deja_dup_config_delete_type_id = g_type_register_static (DEJA_DUP_TYPE_CONFIG_CHOICE, "DejaDupConfigDelete", &g_define_type_info, 0);
		g_once_init_leave (&deja_dup_config_delete_type_id__volatile, deja_dup_config_delete_type_id);
	}
	return deja_dup_config_delete_type_id__volatile;
}



