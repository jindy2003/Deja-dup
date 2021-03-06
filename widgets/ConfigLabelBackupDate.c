/* ConfigLabelBackupDate.c generated by valac 0.16.1, the Vala compiler
 * generated from ConfigLabelBackupDate.vala, do not modify */

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

#define DEJA_DUP_TYPE_CONFIG_LABEL (deja_dup_config_label_get_type ())
#define DEJA_DUP_CONFIG_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_LABEL, DejaDupConfigLabel))
#define DEJA_DUP_CONFIG_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_LABEL, DejaDupConfigLabelClass))
#define DEJA_DUP_IS_CONFIG_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_LABEL))
#define DEJA_DUP_IS_CONFIG_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_LABEL))
#define DEJA_DUP_CONFIG_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_LABEL, DejaDupConfigLabelClass))

typedef struct _DejaDupConfigLabel DejaDupConfigLabel;
typedef struct _DejaDupConfigLabelClass DejaDupConfigLabelClass;
typedef struct _DejaDupConfigLabelPrivate DejaDupConfigLabelPrivate;

#define DEJA_DUP_TYPE_CONFIG_LABEL_BACKUP_DATE (deja_dup_config_label_backup_date_get_type ())
#define DEJA_DUP_CONFIG_LABEL_BACKUP_DATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_LABEL_BACKUP_DATE, DejaDupConfigLabelBackupDate))
#define DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_LABEL_BACKUP_DATE, DejaDupConfigLabelBackupDateClass))
#define DEJA_DUP_IS_CONFIG_LABEL_BACKUP_DATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_LABEL_BACKUP_DATE))
#define DEJA_DUP_IS_CONFIG_LABEL_BACKUP_DATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_LABEL_BACKUP_DATE))
#define DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_LABEL_BACKUP_DATE, DejaDupConfigLabelBackupDateClass))

typedef struct _DejaDupConfigLabelBackupDate DejaDupConfigLabelBackupDate;
typedef struct _DejaDupConfigLabelBackupDateClass DejaDupConfigLabelBackupDateClass;
typedef struct _DejaDupConfigLabelBackupDatePrivate DejaDupConfigLabelBackupDatePrivate;

#define DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_TYPE_KIND (deja_dup_config_label_backup_date_kind_get_type ())
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _DejaDupConfigLabelBackupDateSetFromConfigData DejaDupConfigLabelBackupDateSetFromConfigData;

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

struct _DejaDupConfigLabel {
	DejaDupConfigWidget parent_instance;
	DejaDupConfigLabelPrivate * priv;
	GtkGrid* box;
	GtkLabel* label;
};

struct _DejaDupConfigLabelClass {
	DejaDupConfigWidgetClass parent_class;
	void (*fill_box) (DejaDupConfigLabel* self);
};

struct _DejaDupConfigLabelBackupDate {
	DejaDupConfigLabel parent_instance;
	DejaDupConfigLabelBackupDatePrivate * priv;
};

struct _DejaDupConfigLabelBackupDateClass {
	DejaDupConfigLabelClass parent_class;
};

typedef enum  {
	DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_LAST,
	DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_NEXT
} DejaDupConfigLabelBackupDateKind;

struct _DejaDupConfigLabelBackupDatePrivate {
	DejaDupConfigLabelBackupDateKind _kind;
};

struct _DejaDupConfigLabelBackupDateSetFromConfigData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	DejaDupConfigLabelBackupDate* self;
	DejaDupConfigLabelBackupDateKind _tmp0_;
};


static gpointer deja_dup_config_label_backup_date_parent_class = NULL;

GType deja_dup_config_widget_get_type (void) G_GNUC_CONST;
GType deja_dup_config_label_get_type (void) G_GNUC_CONST;
GType deja_dup_config_label_backup_date_get_type (void) G_GNUC_CONST;
GType deja_dup_config_label_backup_date_kind_get_type (void) G_GNUC_CONST;
#define DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DEJA_DUP_TYPE_CONFIG_LABEL_BACKUP_DATE, DejaDupConfigLabelBackupDatePrivate))
enum  {
	DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_DUMMY_PROPERTY,
	DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND
};
DejaDupConfigLabelBackupDate* deja_dup_config_label_backup_date_new (DejaDupConfigLabelBackupDateKind kind);
DejaDupConfigLabelBackupDate* deja_dup_config_label_backup_date_construct (GType object_type, DejaDupConfigLabelBackupDateKind kind);
static gboolean deja_dup_config_label_backup_date_is_same_day (DejaDupConfigLabelBackupDate* self, GDateTime* one, GDateTime* two);
static gchar* deja_dup_config_label_backup_date_pretty_date_name (DejaDupConfigLabelBackupDate* self, GDateTime* date);
DejaDupConfigLabelBackupDateKind deja_dup_config_label_backup_date_get_kind (DejaDupConfigLabelBackupDate* self);
void deja_dup_config_label_backup_date_set_from_config_last (DejaDupConfigLabelBackupDate* self);
void deja_dup_config_label_backup_date_set_from_config_next (DejaDupConfigLabelBackupDate* self);
static void deja_dup_config_label_backup_date_real_set_from_config_data_free (gpointer _data);
static void deja_dup_config_label_backup_date_real_set_from_config (DejaDupConfigWidget* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean deja_dup_config_label_backup_date_real_set_from_config_co (DejaDupConfigLabelBackupDateSetFromConfigData* _data_);
static void deja_dup_config_label_backup_date_set_kind (DejaDupConfigLabelBackupDate* self, DejaDupConfigLabelBackupDateKind value);
static GObject * deja_dup_config_label_backup_date_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
void deja_dup_config_widget_watch_key (DejaDupConfigWidget* self, const gchar* key, DejaDupSimpleSettings* s);
static void deja_dup_config_label_backup_date_finalize (GObject* obj);
static void _vala_deja_dup_config_label_backup_date_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_deja_dup_config_label_backup_date_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GType deja_dup_config_label_backup_date_kind_get_type (void) {
	static volatile gsize deja_dup_config_label_backup_date_kind_type_id__volatile = 0;
	if (g_once_init_enter (&deja_dup_config_label_backup_date_kind_type_id__volatile)) {
		static const GEnumValue values[] = {{DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_LAST, "DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_LAST", "last"}, {DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_NEXT, "DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_NEXT", "next"}, {0, NULL, NULL}};
		GType deja_dup_config_label_backup_date_kind_type_id;
		deja_dup_config_label_backup_date_kind_type_id = g_enum_register_static ("DejaDupConfigLabelBackupDateKind", values);
		g_once_init_leave (&deja_dup_config_label_backup_date_kind_type_id__volatile, deja_dup_config_label_backup_date_kind_type_id);
	}
	return deja_dup_config_label_backup_date_kind_type_id__volatile;
}


DejaDupConfigLabelBackupDate* deja_dup_config_label_backup_date_construct (GType object_type, DejaDupConfigLabelBackupDateKind kind) {
	DejaDupConfigLabelBackupDate * self = NULL;
	DejaDupConfigLabelBackupDateKind _tmp0_;
	_tmp0_ = kind;
	self = (DejaDupConfigLabelBackupDate*) g_object_new (object_type, "kind", _tmp0_, NULL);
	return self;
}


DejaDupConfigLabelBackupDate* deja_dup_config_label_backup_date_new (DejaDupConfigLabelBackupDateKind kind) {
	return deja_dup_config_label_backup_date_construct (DEJA_DUP_TYPE_CONFIG_LABEL_BACKUP_DATE, kind);
}


static gboolean deja_dup_config_label_backup_date_is_same_day (DejaDupConfigLabelBackupDate* self, GDateTime* one, GDateTime* two) {
	gboolean result = FALSE;
	gint ny = 0;
	gint nm = 0;
	gint nd = 0;
	gint dy = 0;
	gint dm = 0;
	gint dd = 0;
	GDateTime* _tmp0_;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	GDateTime* _tmp4_;
	gint _tmp5_ = 0;
	gint _tmp6_ = 0;
	gint _tmp7_ = 0;
	gboolean _tmp8_ = FALSE;
	gboolean _tmp9_ = FALSE;
	gint _tmp10_;
	gint _tmp11_;
	gboolean _tmp14_;
	gboolean _tmp17_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (one != NULL, FALSE);
	g_return_val_if_fail (two != NULL, FALSE);
	_tmp0_ = one;
	g_date_time_get_ymd (_tmp0_, &_tmp1_, &_tmp2_, &_tmp3_);
	ny = _tmp1_;
	nm = _tmp2_;
	nd = _tmp3_;
	_tmp4_ = two;
	g_date_time_get_ymd (_tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	dy = _tmp5_;
	dm = _tmp6_;
	dd = _tmp7_;
	_tmp10_ = ny;
	_tmp11_ = dy;
	if (_tmp10_ == _tmp11_) {
		gint _tmp12_;
		gint _tmp13_;
		_tmp12_ = nm;
		_tmp13_ = dm;
		_tmp9_ = _tmp12_ == _tmp13_;
	} else {
		_tmp9_ = FALSE;
	}
	_tmp14_ = _tmp9_;
	if (_tmp14_) {
		gint _tmp15_;
		gint _tmp16_;
		_tmp15_ = nd;
		_tmp16_ = dd;
		_tmp8_ = _tmp15_ == _tmp16_;
	} else {
		_tmp8_ = FALSE;
	}
	_tmp17_ = _tmp8_;
	result = _tmp17_;
	return result;
}


static gchar* deja_dup_config_label_backup_date_pretty_date_name (DejaDupConfigLabelBackupDate* self, GDateTime* date) {
	gchar* result = NULL;
	GDateTime* _tmp0_;
	GDateTime* now;
	gboolean _tmp1_ = FALSE;
	DejaDupConfigLabelBackupDateKind _tmp2_;
	gboolean _tmp6_;
	GDateTime* _tmp8_;
	GDateTime* _tmp9_;
	gboolean _tmp10_ = FALSE;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (date != NULL, NULL);
	_tmp0_ = g_date_time_new_now_local ();
	now = _tmp0_;
	_tmp2_ = self->priv->_kind;
	if (_tmp2_ == DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_NEXT) {
		GDateTime* _tmp3_;
		GDateTime* _tmp4_;
		gint _tmp5_ = 0;
		_tmp3_ = now;
		_tmp4_ = date;
		_tmp5_ = g_date_time_compare (_tmp3_, _tmp4_);
		_tmp1_ = _tmp5_ > 0;
	} else {
		_tmp1_ = FALSE;
	}
	_tmp6_ = _tmp1_;
	if (_tmp6_) {
		GDateTime* _tmp7_;
		_tmp7_ = now;
		date = _tmp7_;
	}
	_tmp8_ = date;
	_tmp9_ = now;
	_tmp10_ = deja_dup_config_label_backup_date_is_same_day (self, _tmp8_, _tmp9_);
	if (_tmp10_) {
		const gchar* _tmp11_ = NULL;
		gchar* _tmp12_;
		_tmp11_ = _ ("Today");
		_tmp12_ = g_strdup (_tmp11_);
		result = _tmp12_;
		_g_date_time_unref0 (now);
		return result;
	} else {
		GDateTime* _tmp13_;
		GDateTime* _tmp14_;
		GDateTime* _tmp15_ = NULL;
		GDateTime* _tmp16_;
		gboolean _tmp17_ = FALSE;
		gboolean _tmp18_;
		_tmp13_ = date;
		_tmp14_ = now;
		_tmp15_ = g_date_time_add_days (_tmp14_, -1);
		_tmp16_ = _tmp15_;
		_tmp17_ = deja_dup_config_label_backup_date_is_same_day (self, _tmp13_, _tmp16_);
		_tmp18_ = _tmp17_;
		_g_date_time_unref0 (_tmp16_);
		if (_tmp18_) {
			const gchar* _tmp19_ = NULL;
			gchar* _tmp20_;
			_tmp19_ = _ ("Yesterday");
			_tmp20_ = g_strdup (_tmp19_);
			result = _tmp20_;
			_g_date_time_unref0 (now);
			return result;
		} else {
			GDateTime* _tmp21_;
			GDateTime* _tmp22_;
			GDateTime* _tmp23_ = NULL;
			GDateTime* _tmp24_;
			gboolean _tmp25_ = FALSE;
			gboolean _tmp26_;
			_tmp21_ = date;
			_tmp22_ = now;
			_tmp23_ = g_date_time_add_days (_tmp22_, 1);
			_tmp24_ = _tmp23_;
			_tmp25_ = deja_dup_config_label_backup_date_is_same_day (self, _tmp21_, _tmp24_);
			_tmp26_ = _tmp25_;
			_g_date_time_unref0 (_tmp24_);
			if (_tmp26_) {
				const gchar* _tmp27_ = NULL;
				gchar* _tmp28_;
				_tmp27_ = _ ("Tomorrow");
				_tmp28_ = g_strdup (_tmp27_);
				result = _tmp28_;
				_g_date_time_unref0 (now);
				return result;
			} else {
				GDateTime* _tmp29_;
				GDateTime* _tmp30_;
				gint _tmp31_ = 0;
				_tmp29_ = now;
				_tmp30_ = date;
				_tmp31_ = g_date_time_compare (_tmp29_, _tmp30_);
				if (_tmp31_ < 0) {
					GDateTime* _tmp32_;
					gint _tmp33_ = 0;
					GDateTime* _tmp34_;
					gint _tmp35_ = 0;
					GDateTime* _tmp36_;
					gint _tmp37_ = 0;
					GDateTime* _tmp38_;
					GDateTime* _tmp39_;
					GDateTime* _tmp40_;
					GTimeSpan _tmp41_ = 0LL;
					gint diff;
					gint _tmp42_;
					const gchar* _tmp43_ = NULL;
					gint _tmp44_;
					gchar* _tmp45_ = NULL;
					_tmp32_ = now;
					_tmp33_ = g_date_time_get_year (_tmp32_);
					_tmp34_ = now;
					_tmp35_ = g_date_time_get_month (_tmp34_);
					_tmp36_ = now;
					_tmp37_ = g_date_time_get_day_of_month (_tmp36_);
					_tmp38_ = g_date_time_new_local (_tmp33_, _tmp35_, _tmp37_, 0, 0, 0.0);
					_g_date_time_unref0 (now);
					now = _tmp38_;
					_tmp39_ = date;
					_tmp40_ = now;
					_tmp41_ = g_date_time_difference (_tmp39_, _tmp40_);
					diff = (gint) (_tmp41_ / G_TIME_SPAN_DAY);
					_tmp42_ = diff;
					_tmp43_ = g_dngettext (GETTEXT_PACKAGE, "%d day from now", "%d days from now", (gulong) _tmp42_);
					_tmp44_ = diff;
					_tmp45_ = g_strdup_printf (_tmp43_, _tmp44_);
					result = _tmp45_;
					_g_date_time_unref0 (now);
					return result;
				} else {
					GDateTime* _tmp46_;
					gint _tmp47_ = 0;
					GDateTime* _tmp48_;
					gint _tmp49_ = 0;
					GDateTime* _tmp50_;
					gint _tmp51_ = 0;
					GDateTime* _tmp52_;
					GDateTime* _tmp53_;
					GDateTime* _tmp54_;
					GTimeSpan _tmp55_ = 0LL;
					gint diff;
					gint _tmp56_;
					const gchar* _tmp57_ = NULL;
					gint _tmp58_;
					gchar* _tmp59_ = NULL;
					_tmp46_ = now;
					_tmp47_ = g_date_time_get_year (_tmp46_);
					_tmp48_ = now;
					_tmp49_ = g_date_time_get_month (_tmp48_);
					_tmp50_ = now;
					_tmp51_ = g_date_time_get_day_of_month (_tmp50_);
					_tmp52_ = g_date_time_new_local (_tmp47_, _tmp49_, _tmp51_, 0, 0, 0.0);
					_g_date_time_unref0 (now);
					now = _tmp52_;
					_tmp53_ = now;
					_tmp54_ = date;
					_tmp55_ = g_date_time_difference (_tmp53_, _tmp54_);
					diff = (gint) ((_tmp55_ / G_TIME_SPAN_DAY) + 1);
					_tmp56_ = diff;
					_tmp57_ = g_dngettext (GETTEXT_PACKAGE, "%d day ago", "%d days ago", (gulong) _tmp56_);
					_tmp58_ = diff;
					_tmp59_ = g_strdup_printf (_tmp57_, _tmp58_);
					result = _tmp59_;
					_g_date_time_unref0 (now);
					return result;
				}
			}
		}
	}
	_g_date_time_unref0 (now);
}


void deja_dup_config_label_backup_date_set_from_config_last (DejaDupConfigLabelBackupDate* self) {
	gchar* _tmp0_ = NULL;
	gchar* val;
	GTimeVal time = {0};
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp2_;
	gboolean _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = deja_dup_last_run_date (DEJA_DUP_TIMESTAMP_TYPE_BACKUP);
	val = _tmp0_;
	g_get_current_time (&time);
	_tmp2_ = val;
	if (g_strcmp0 (_tmp2_, "") == 0) {
		_tmp1_ = TRUE;
	} else {
		const gchar* _tmp3_;
		gboolean _tmp4_ = FALSE;
		_tmp3_ = val;
		_tmp4_ = g_time_val_from_iso8601 (_tmp3_, &time);
		_tmp1_ = !_tmp4_;
	}
	_tmp5_ = _tmp1_;
	if (_tmp5_) {
		GtkLabel* _tmp6_;
		const gchar* _tmp7_ = NULL;
		_tmp6_ = ((DejaDupConfigLabel*) self)->label;
		_tmp7_ = _ ("None");
		gtk_label_set_label (_tmp6_, _tmp7_);
	} else {
		GtkLabel* _tmp8_;
		GTimeVal _tmp9_;
		GDateTime* _tmp10_;
		GDateTime* _tmp11_;
		gchar* _tmp12_ = NULL;
		gchar* _tmp13_;
		_tmp8_ = ((DejaDupConfigLabel*) self)->label;
		_tmp9_ = time;
		_tmp10_ = g_date_time_new_from_timeval_local (&_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = deja_dup_config_label_backup_date_pretty_date_name (self, _tmp11_);
		_tmp13_ = _tmp12_;
		gtk_label_set_label (_tmp8_, _tmp13_);
		_g_free0 (_tmp13_);
		_g_date_time_unref0 (_tmp11_);
	}
	_g_free0 (val);
}


void deja_dup_config_label_backup_date_set_from_config_next (DejaDupConfigLabelBackupDate* self) {
	GDateTime* _tmp0_ = NULL;
	GDateTime* next;
	GDateTime* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = deja_dup_next_run_date ();
	next = _tmp0_;
	_tmp1_ = next;
	if (_tmp1_ != NULL) {
		GtkLabel* _tmp2_;
		GDateTime* _tmp3_;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_;
		_tmp2_ = ((DejaDupConfigLabel*) self)->label;
		_tmp3_ = next;
		_tmp4_ = deja_dup_config_label_backup_date_pretty_date_name (self, _tmp3_);
		_tmp5_ = _tmp4_;
		gtk_label_set_label (_tmp2_, _tmp5_);
		_g_free0 (_tmp5_);
	} else {
		GtkLabel* _tmp6_;
		const gchar* _tmp7_ = NULL;
		_tmp6_ = ((DejaDupConfigLabel*) self)->label;
		_tmp7_ = _ ("None");
		gtk_label_set_label (_tmp6_, _tmp7_);
	}
	_g_date_time_unref0 (next);
}


static void deja_dup_config_label_backup_date_real_set_from_config_data_free (gpointer _data) {
	DejaDupConfigLabelBackupDateSetFromConfigData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (DejaDupConfigLabelBackupDateSetFromConfigData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void deja_dup_config_label_backup_date_real_set_from_config (DejaDupConfigWidget* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	DejaDupConfigLabelBackupDate * self;
	DejaDupConfigLabelBackupDateSetFromConfigData* _data_;
	DejaDupConfigLabelBackupDate* _tmp0_;
	self = (DejaDupConfigLabelBackupDate*) base;
	_data_ = g_slice_new0 (DejaDupConfigLabelBackupDateSetFromConfigData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, deja_dup_config_label_backup_date_real_set_from_config);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, deja_dup_config_label_backup_date_real_set_from_config_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	deja_dup_config_label_backup_date_real_set_from_config_co (_data_);
}


static void deja_dup_config_label_backup_date_real_set_from_config_finish (DejaDupConfigWidget* base, GAsyncResult* _res_) {
	DejaDupConfigLabelBackupDateSetFromConfigData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean deja_dup_config_label_backup_date_real_set_from_config_co (DejaDupConfigLabelBackupDateSetFromConfigData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = _data_->self->priv->_kind;
	if (_data_->_tmp0_ == DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_LAST) {
		deja_dup_config_label_backup_date_set_from_config_last (_data_->self);
	} else {
		deja_dup_config_label_backup_date_set_from_config_next (_data_->self);
	}
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


DejaDupConfigLabelBackupDateKind deja_dup_config_label_backup_date_get_kind (DejaDupConfigLabelBackupDate* self) {
	DejaDupConfigLabelBackupDateKind result;
	DejaDupConfigLabelBackupDateKind _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_kind;
	result = _tmp0_;
	return result;
}


static void deja_dup_config_label_backup_date_set_kind (DejaDupConfigLabelBackupDate* self, DejaDupConfigLabelBackupDateKind value) {
	DejaDupConfigLabelBackupDateKind _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_kind = _tmp0_;
	g_object_notify ((GObject *) self, "kind");
}


static GObject * deja_dup_config_label_backup_date_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	DejaDupConfigLabelBackupDate * self;
	DejaDupConfigLabelBackupDateKind _tmp0_;
	parent_class = G_OBJECT_CLASS (deja_dup_config_label_backup_date_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = DEJA_DUP_CONFIG_LABEL_BACKUP_DATE (obj);
	deja_dup_config_widget_watch_key ((DejaDupConfigWidget*) self, DEJA_DUP_LAST_BACKUP_KEY, NULL);
	_tmp0_ = self->priv->_kind;
	if (_tmp0_ == DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND_NEXT) {
		deja_dup_config_widget_watch_key ((DejaDupConfigWidget*) self, DEJA_DUP_PERIODIC_KEY, NULL);
		deja_dup_config_widget_watch_key ((DejaDupConfigWidget*) self, DEJA_DUP_PERIODIC_PERIOD_KEY, NULL);
	}
	return obj;
}


static void deja_dup_config_label_backup_date_class_init (DejaDupConfigLabelBackupDateClass * klass) {
	deja_dup_config_label_backup_date_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (DejaDupConfigLabelBackupDatePrivate));
	DEJA_DUP_CONFIG_WIDGET_CLASS (klass)->set_from_config = deja_dup_config_label_backup_date_real_set_from_config;
	DEJA_DUP_CONFIG_WIDGET_CLASS (klass)->set_from_config_finish = deja_dup_config_label_backup_date_real_set_from_config_finish;
	G_OBJECT_CLASS (klass)->get_property = _vala_deja_dup_config_label_backup_date_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_deja_dup_config_label_backup_date_set_property;
	G_OBJECT_CLASS (klass)->constructor = deja_dup_config_label_backup_date_constructor;
	G_OBJECT_CLASS (klass)->finalize = deja_dup_config_label_backup_date_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND, g_param_spec_enum ("kind", "kind", "kind", DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_TYPE_KIND, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}


static void deja_dup_config_label_backup_date_instance_init (DejaDupConfigLabelBackupDate * self) {
	self->priv = DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_GET_PRIVATE (self);
}


static void deja_dup_config_label_backup_date_finalize (GObject* obj) {
	DejaDupConfigLabelBackupDate * self;
	self = DEJA_DUP_CONFIG_LABEL_BACKUP_DATE (obj);
	G_OBJECT_CLASS (deja_dup_config_label_backup_date_parent_class)->finalize (obj);
}


GType deja_dup_config_label_backup_date_get_type (void) {
	static volatile gsize deja_dup_config_label_backup_date_type_id__volatile = 0;
	if (g_once_init_enter (&deja_dup_config_label_backup_date_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DejaDupConfigLabelBackupDateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) deja_dup_config_label_backup_date_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DejaDupConfigLabelBackupDate), 0, (GInstanceInitFunc) deja_dup_config_label_backup_date_instance_init, NULL };
		GType deja_dup_config_label_backup_date_type_id;
		deja_dup_config_label_backup_date_type_id = g_type_register_static (DEJA_DUP_TYPE_CONFIG_LABEL, "DejaDupConfigLabelBackupDate", &g_define_type_info, 0);
		g_once_init_leave (&deja_dup_config_label_backup_date_type_id__volatile, deja_dup_config_label_backup_date_type_id);
	}
	return deja_dup_config_label_backup_date_type_id__volatile;
}


static void _vala_deja_dup_config_label_backup_date_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	DejaDupConfigLabelBackupDate * self;
	self = DEJA_DUP_CONFIG_LABEL_BACKUP_DATE (object);
	switch (property_id) {
		case DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND:
		g_value_set_enum (value, deja_dup_config_label_backup_date_get_kind (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_deja_dup_config_label_backup_date_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	DejaDupConfigLabelBackupDate * self;
	self = DEJA_DUP_CONFIG_LABEL_BACKUP_DATE (object);
	switch (property_id) {
		case DEJA_DUP_CONFIG_LABEL_BACKUP_DATE_KIND:
		deja_dup_config_label_backup_date_set_kind (self, g_value_get_enum (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



