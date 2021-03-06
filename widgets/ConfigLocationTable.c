/* ConfigLocationTable.c generated by valac 0.16.1, the Vala compiler
 * generated from ConfigLocationTable.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>


#define DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE (deja_dup_config_location_table_get_type ())
#define DEJA_DUP_CONFIG_LOCATION_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, DejaDupConfigLocationTable))
#define DEJA_DUP_CONFIG_LOCATION_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, DejaDupConfigLocationTableClass))
#define DEJA_DUP_IS_CONFIG_LOCATION_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE))
#define DEJA_DUP_IS_CONFIG_LOCATION_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE))
#define DEJA_DUP_CONFIG_LOCATION_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, DejaDupConfigLocationTableClass))

typedef struct _DejaDupConfigLocationTable DejaDupConfigLocationTable;
typedef struct _DejaDupConfigLocationTableClass DejaDupConfigLocationTableClass;
typedef struct _DejaDupConfigLocationTablePrivate DejaDupConfigLocationTablePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define DEJA_DUP_TYPE_TOGGLABLE (deja_dup_togglable_get_type ())
#define DEJA_DUP_TOGGLABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_TOGGLABLE, DejaDupTogglable))
#define DEJA_DUP_IS_TOGGLABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_TOGGLABLE))
#define DEJA_DUP_TOGGLABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DEJA_DUP_TYPE_TOGGLABLE, DejaDupTogglableIface))

typedef struct _DejaDupTogglable DejaDupTogglable;
typedef struct _DejaDupTogglableIface DejaDupTogglableIface;
typedef struct _Block3Data Block3Data;
typedef struct _Block4Data Block4Data;

struct _DejaDupConfigLocationTable {
	GtkGrid parent_instance;
	DejaDupConfigLocationTablePrivate * priv;
	gint row;
};

struct _DejaDupConfigLocationTableClass {
	GtkGridClass parent_class;
};

struct _DejaDupConfigLocationTablePrivate {
	GtkSizeGroup* _label_sizes;
};

struct _DejaDupTogglableIface {
	GTypeInterface parent_iface;
	gboolean (*get_active) (DejaDupTogglable* self);
};

struct _Block3Data {
	int _ref_count_;
	DejaDupConfigLocationTable * self;
	GtkWidget* label;
	GtkWidget* w;
	DejaDupTogglable* check;
};

struct _Block4Data {
	int _ref_count_;
	DejaDupConfigLocationTable * self;
	GtkWidget* w;
	DejaDupTogglable* check;
};


static gpointer deja_dup_config_location_table_parent_class = NULL;

GType deja_dup_config_location_table_get_type (void) G_GNUC_CONST;
#define DEJA_DUP_CONFIG_LOCATION_TABLE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, DejaDupConfigLocationTablePrivate))
enum  {
	DEJA_DUP_CONFIG_LOCATION_TABLE_DUMMY_PROPERTY,
	DEJA_DUP_CONFIG_LOCATION_TABLE_LABEL_SIZES
};
DejaDupConfigLocationTable* deja_dup_config_location_table_new (GtkSizeGroup* sg);
DejaDupConfigLocationTable* deja_dup_config_location_table_construct (GType object_type, GtkSizeGroup* sg);
GType deja_dup_togglable_get_type (void) G_GNUC_CONST;
void deja_dup_config_location_table_add_widget (DejaDupConfigLocationTable* self, const gchar* msg, GtkWidget* w, DejaDupTogglable* check, GtkWidget* mnemonic);
GtkSizeGroup* deja_dup_config_location_table_get_label_sizes (DejaDupConfigLocationTable* self);
void deja_dup_config_location_table_add_widget_with_label (DejaDupConfigLocationTable* self, GtkWidget* label, GtkWidget* w, DejaDupTogglable* check);
static Block3Data* block3_data_ref (Block3Data* _data3_);
static void block3_data_unref (void * _userdata_);
gboolean deja_dup_togglable_get_active (DejaDupTogglable* self);
static void ___lambda6_ (Block3Data* _data3_);
static void ____lambda6__deja_dup_togglable_toggled (DejaDupTogglable* _sender, DejaDupTogglable* t, gboolean user, gpointer self);
void deja_dup_config_location_table_add_wide_widget (DejaDupConfigLocationTable* self, GtkWidget* w, DejaDupTogglable* check);
static Block4Data* block4_data_ref (Block4Data* _data4_);
static void block4_data_unref (void * _userdata_);
static void ___lambda7_ (Block4Data* _data4_);
static void ____lambda7__deja_dup_togglable_toggled (DejaDupTogglable* _sender, DejaDupTogglable* t, gboolean user, gpointer self);
static void deja_dup_config_location_table_set_label_sizes (DejaDupConfigLocationTable* self, GtkSizeGroup* value);
static GObject * deja_dup_config_location_table_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void deja_dup_config_location_table_finalize (GObject* obj);
static void _vala_deja_dup_config_location_table_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_deja_dup_config_location_table_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


DejaDupConfigLocationTable* deja_dup_config_location_table_construct (GType object_type, GtkSizeGroup* sg) {
	DejaDupConfigLocationTable * self = NULL;
	GtkSizeGroup* _tmp0_;
	g_return_val_if_fail (sg != NULL, NULL);
	_tmp0_ = sg;
	self = (DejaDupConfigLocationTable*) g_object_new (object_type, "label-sizes", _tmp0_, NULL);
	return self;
}


DejaDupConfigLocationTable* deja_dup_config_location_table_new (GtkSizeGroup* sg) {
	return deja_dup_config_location_table_construct (DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, sg);
}


void deja_dup_config_location_table_add_widget (DejaDupConfigLocationTable* self, const gchar* msg, GtkWidget* w, DejaDupTogglable* check, GtkWidget* mnemonic) {
	const gchar* _tmp0_;
	GtkLabel* _tmp1_;
	GtkLabel* _tmp2_;
	GtkLabel* label;
	GtkWidget* _tmp3_ = NULL;
	GtkWidget* _tmp4_;
	GtkLabel* _tmp7_;
	GtkWidget* _tmp8_;
	GtkSizeGroup* _tmp9_;
	GtkLabel* _tmp10_;
	GtkLabel* _tmp11_;
	GtkWidget* _tmp12_;
	DejaDupTogglable* _tmp13_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (msg != NULL);
	g_return_if_fail (w != NULL);
	_tmp0_ = msg;
	_tmp1_ = (GtkLabel*) gtk_label_new (_tmp0_);
	_tmp2_ = g_object_ref_sink (_tmp1_);
	label = _tmp2_;
	_tmp4_ = mnemonic;
	if (_tmp4_ != NULL) {
		GtkWidget* _tmp5_;
		_tmp5_ = mnemonic;
		_tmp3_ = _tmp5_;
	} else {
		GtkWidget* _tmp6_;
		_tmp6_ = w;
		_tmp3_ = _tmp6_;
	}
	_tmp7_ = label;
	_tmp8_ = _tmp3_;
	g_object_set ((GObject*) _tmp7_, "mnemonic-widget", _tmp8_, "use-underline", TRUE, "xalign", 1.0f, NULL);
	_tmp9_ = self->priv->_label_sizes;
	_tmp10_ = label;
	gtk_size_group_add_widget (_tmp9_, (GtkWidget*) _tmp10_);
	_tmp11_ = label;
	_tmp12_ = w;
	_tmp13_ = check;
	deja_dup_config_location_table_add_widget_with_label (self, (GtkWidget*) _tmp11_, _tmp12_, _tmp13_);
	_g_object_unref0 (label);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static Block3Data* block3_data_ref (Block3Data* _data3_) {
	g_atomic_int_inc (&_data3_->_ref_count_);
	return _data3_;
}


static void block3_data_unref (void * _userdata_) {
	Block3Data* _data3_;
	_data3_ = (Block3Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data3_->_ref_count_)) {
		DejaDupConfigLocationTable * self;
		self = _data3_->self;
		_g_object_unref0 (_data3_->label);
		_g_object_unref0 (_data3_->w);
		_g_object_unref0 (_data3_->check);
		_g_object_unref0 (self);
		g_slice_free (Block3Data, _data3_);
	}
}


static void ___lambda6_ (Block3Data* _data3_) {
	DejaDupConfigLocationTable * self;
	GtkWidget* _tmp0_;
	DejaDupTogglable* _tmp1_;
	GtkWidget* _tmp5_;
	DejaDupTogglable* _tmp6_;
	gboolean _tmp7_ = FALSE;
	self = _data3_->self;
	_tmp0_ = _data3_->label;
	_tmp1_ = _data3_->check;
	if ((G_IS_OBJECT (_tmp0_) ? ((GObject*) _tmp0_) : NULL) != (G_IS_OBJECT (_tmp1_) ? ((GObject*) _tmp1_) : NULL)) {
		GtkWidget* _tmp2_;
		DejaDupTogglable* _tmp3_;
		gboolean _tmp4_ = FALSE;
		_tmp2_ = _data3_->label;
		_tmp3_ = _data3_->check;
		_tmp4_ = deja_dup_togglable_get_active (_tmp3_);
		gtk_widget_set_sensitive (_tmp2_, _tmp4_);
	}
	_tmp5_ = _data3_->w;
	_tmp6_ = _data3_->check;
	_tmp7_ = deja_dup_togglable_get_active (_tmp6_);
	gtk_widget_set_sensitive (_tmp5_, _tmp7_);
}


static void ____lambda6__deja_dup_togglable_toggled (DejaDupTogglable* _sender, DejaDupTogglable* t, gboolean user, gpointer self) {
	___lambda6_ (self);
}


void deja_dup_config_location_table_add_widget_with_label (DejaDupConfigLocationTable* self, GtkWidget* label, GtkWidget* w, DejaDupTogglable* check) {
	Block3Data* _data3_;
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	GtkWidget* _tmp2_;
	GtkWidget* _tmp3_;
	DejaDupTogglable* _tmp4_;
	DejaDupTogglable* _tmp5_;
	GtkWidget* _tmp6_;
	gint _tmp7_;
	GtkWidget* _tmp8_;
	GtkWidget* _tmp9_;
	gint _tmp10_;
	gint _tmp11_;
	DejaDupTogglable* _tmp12_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (label != NULL);
	g_return_if_fail (w != NULL);
	_data3_ = g_slice_new0 (Block3Data);
	_data3_->_ref_count_ = 1;
	_data3_->self = g_object_ref (self);
	_tmp0_ = label;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_data3_->label = _tmp1_;
	_tmp2_ = w;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	_data3_->w = _tmp3_;
	_tmp4_ = check;
	_tmp5_ = _g_object_ref0 (_tmp4_);
	_data3_->check = _tmp5_;
	_tmp6_ = _data3_->label;
	_tmp7_ = self->row;
	gtk_grid_attach ((GtkGrid*) self, _tmp6_, 0, _tmp7_, 1, 1);
	_tmp8_ = _data3_->w;
	g_object_set ((GObject*) _tmp8_, "hexpand", TRUE, NULL);
	_tmp9_ = _data3_->w;
	_tmp10_ = self->row;
	gtk_grid_attach ((GtkGrid*) self, _tmp9_, 1, _tmp10_, 1, 1);
	_tmp11_ = self->row;
	self->row = _tmp11_ + 1;
	_tmp12_ = _data3_->check;
	if (_tmp12_ != NULL) {
		GtkWidget* _tmp13_;
		DejaDupTogglable* _tmp14_;
		GtkWidget* _tmp18_;
		DejaDupTogglable* _tmp19_;
		gboolean _tmp20_ = FALSE;
		DejaDupTogglable* _tmp21_;
		_tmp13_ = _data3_->label;
		_tmp14_ = _data3_->check;
		if ((G_IS_OBJECT (_tmp13_) ? ((GObject*) _tmp13_) : NULL) != (G_IS_OBJECT (_tmp14_) ? ((GObject*) _tmp14_) : NULL)) {
			GtkWidget* _tmp15_;
			DejaDupTogglable* _tmp16_;
			gboolean _tmp17_ = FALSE;
			_tmp15_ = _data3_->label;
			_tmp16_ = _data3_->check;
			_tmp17_ = deja_dup_togglable_get_active (_tmp16_);
			gtk_widget_set_sensitive (_tmp15_, _tmp17_);
		}
		_tmp18_ = _data3_->w;
		_tmp19_ = _data3_->check;
		_tmp20_ = deja_dup_togglable_get_active (_tmp19_);
		gtk_widget_set_sensitive (_tmp18_, _tmp20_);
		_tmp21_ = _data3_->check;
		g_signal_connect_data (_tmp21_, "toggled", (GCallback) ____lambda6__deja_dup_togglable_toggled, block3_data_ref (_data3_), (GClosureNotify) block3_data_unref, 0);
	}
	block3_data_unref (_data3_);
	_data3_ = NULL;
}


static Block4Data* block4_data_ref (Block4Data* _data4_) {
	g_atomic_int_inc (&_data4_->_ref_count_);
	return _data4_;
}


static void block4_data_unref (void * _userdata_) {
	Block4Data* _data4_;
	_data4_ = (Block4Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data4_->_ref_count_)) {
		DejaDupConfigLocationTable * self;
		self = _data4_->self;
		_g_object_unref0 (_data4_->w);
		_g_object_unref0 (_data4_->check);
		_g_object_unref0 (self);
		g_slice_free (Block4Data, _data4_);
	}
}


static void ___lambda7_ (Block4Data* _data4_) {
	DejaDupConfigLocationTable * self;
	GtkWidget* _tmp0_;
	DejaDupTogglable* _tmp1_;
	gboolean _tmp2_ = FALSE;
	self = _data4_->self;
	_tmp0_ = _data4_->w;
	_tmp1_ = _data4_->check;
	_tmp2_ = deja_dup_togglable_get_active (_tmp1_);
	gtk_widget_set_sensitive (_tmp0_, _tmp2_);
}


static void ____lambda7__deja_dup_togglable_toggled (DejaDupTogglable* _sender, DejaDupTogglable* t, gboolean user, gpointer self) {
	___lambda7_ (self);
}


void deja_dup_config_location_table_add_wide_widget (DejaDupConfigLocationTable* self, GtkWidget* w, DejaDupTogglable* check) {
	Block4Data* _data4_;
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	DejaDupTogglable* _tmp2_;
	DejaDupTogglable* _tmp3_;
	GtkWidget* _tmp4_;
	GtkWidget* _tmp5_;
	gint _tmp6_;
	gint _tmp7_;
	DejaDupTogglable* _tmp8_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (w != NULL);
	_data4_ = g_slice_new0 (Block4Data);
	_data4_->_ref_count_ = 1;
	_data4_->self = g_object_ref (self);
	_tmp0_ = w;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_data4_->w = _tmp1_;
	_tmp2_ = check;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	_data4_->check = _tmp3_;
	_tmp4_ = _data4_->w;
	gtk_widget_set_hexpand (_tmp4_, TRUE);
	_tmp5_ = _data4_->w;
	_tmp6_ = self->row;
	gtk_grid_attach ((GtkGrid*) self, _tmp5_, 0, _tmp6_, 2, 1);
	_tmp7_ = self->row;
	self->row = _tmp7_ + 1;
	_tmp8_ = _data4_->check;
	if (_tmp8_ != NULL) {
		GtkWidget* _tmp9_;
		DejaDupTogglable* _tmp10_;
		gboolean _tmp11_ = FALSE;
		DejaDupTogglable* _tmp12_;
		_tmp9_ = _data4_->w;
		_tmp10_ = _data4_->check;
		_tmp11_ = deja_dup_togglable_get_active (_tmp10_);
		gtk_widget_set_sensitive (_tmp9_, _tmp11_);
		_tmp12_ = _data4_->check;
		g_signal_connect_data (_tmp12_, "toggled", (GCallback) ____lambda7__deja_dup_togglable_toggled, block4_data_ref (_data4_), (GClosureNotify) block4_data_unref, 0);
	}
	block4_data_unref (_data4_);
	_data4_ = NULL;
}


GtkSizeGroup* deja_dup_config_location_table_get_label_sizes (DejaDupConfigLocationTable* self) {
	GtkSizeGroup* result;
	GtkSizeGroup* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_label_sizes;
	result = _tmp0_;
	return result;
}


static void deja_dup_config_location_table_set_label_sizes (DejaDupConfigLocationTable* self, GtkSizeGroup* value) {
	GtkSizeGroup* _tmp0_;
	GtkSizeGroup* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_label_sizes);
	self->priv->_label_sizes = _tmp1_;
	g_object_notify ((GObject *) self, "label-sizes");
}


static GObject * deja_dup_config_location_table_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	DejaDupConfigLocationTable * self;
	parent_class = G_OBJECT_CLASS (deja_dup_config_location_table_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = DEJA_DUP_CONFIG_LOCATION_TABLE (obj);
	gtk_grid_set_row_spacing ((GtkGrid*) self, 6);
	gtk_grid_set_column_spacing ((GtkGrid*) self, 12);
	return obj;
}


static void deja_dup_config_location_table_class_init (DejaDupConfigLocationTableClass * klass) {
	deja_dup_config_location_table_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (DejaDupConfigLocationTablePrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_deja_dup_config_location_table_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_deja_dup_config_location_table_set_property;
	G_OBJECT_CLASS (klass)->constructor = deja_dup_config_location_table_constructor;
	G_OBJECT_CLASS (klass)->finalize = deja_dup_config_location_table_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), DEJA_DUP_CONFIG_LOCATION_TABLE_LABEL_SIZES, g_param_spec_object ("label-sizes", "label-sizes", "label-sizes", GTK_TYPE_SIZE_GROUP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}


static void deja_dup_config_location_table_instance_init (DejaDupConfigLocationTable * self) {
	self->priv = DEJA_DUP_CONFIG_LOCATION_TABLE_GET_PRIVATE (self);
	self->row = 0;
}


static void deja_dup_config_location_table_finalize (GObject* obj) {
	DejaDupConfigLocationTable * self;
	self = DEJA_DUP_CONFIG_LOCATION_TABLE (obj);
	_g_object_unref0 (self->priv->_label_sizes);
	G_OBJECT_CLASS (deja_dup_config_location_table_parent_class)->finalize (obj);
}


GType deja_dup_config_location_table_get_type (void) {
	static volatile gsize deja_dup_config_location_table_type_id__volatile = 0;
	if (g_once_init_enter (&deja_dup_config_location_table_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DejaDupConfigLocationTableClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) deja_dup_config_location_table_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DejaDupConfigLocationTable), 0, (GInstanceInitFunc) deja_dup_config_location_table_instance_init, NULL };
		GType deja_dup_config_location_table_type_id;
		deja_dup_config_location_table_type_id = g_type_register_static (GTK_TYPE_GRID, "DejaDupConfigLocationTable", &g_define_type_info, 0);
		g_once_init_leave (&deja_dup_config_location_table_type_id__volatile, deja_dup_config_location_table_type_id);
	}
	return deja_dup_config_location_table_type_id__volatile;
}


static void _vala_deja_dup_config_location_table_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	DejaDupConfigLocationTable * self;
	self = DEJA_DUP_CONFIG_LOCATION_TABLE (object);
	switch (property_id) {
		case DEJA_DUP_CONFIG_LOCATION_TABLE_LABEL_SIZES:
		g_value_set_object (value, deja_dup_config_location_table_get_label_sizes (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_deja_dup_config_location_table_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	DejaDupConfigLocationTable * self;
	self = DEJA_DUP_CONFIG_LOCATION_TABLE (object);
	switch (property_id) {
		case DEJA_DUP_CONFIG_LOCATION_TABLE_LABEL_SIZES:
		deja_dup_config_location_table_set_label_sizes (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



