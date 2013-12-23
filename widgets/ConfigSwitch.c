/* ConfigSwitch.c generated by valac 0.16.1, the Vala compiler
 * generated from ConfigSwitch.vala, do not modify */

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


#define DEJA_DUP_TYPE_CONFIG_WIDGET (deja_dup_config_widget_get_type ())
#define DEJA_DUP_CONFIG_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidget))
#define DEJA_DUP_CONFIG_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidgetClass))
#define DEJA_DUP_IS_CONFIG_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET))
#define DEJA_DUP_IS_CONFIG_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_WIDGET))
#define DEJA_DUP_CONFIG_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidgetClass))

typedef struct _DejaDupConfigWidget DejaDupConfigWidget;
typedef struct _DejaDupConfigWidgetClass DejaDupConfigWidgetClass;
typedef struct _DejaDupConfigWidgetPrivate DejaDupConfigWidgetPrivate;

#define DEJA_DUP_TYPE_TOGGLABLE (deja_dup_togglable_get_type ())
#define DEJA_DUP_TOGGLABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_TOGGLABLE, DejaDupTogglable))
#define DEJA_DUP_IS_TOGGLABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_TOGGLABLE))
#define DEJA_DUP_TOGGLABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DEJA_DUP_TYPE_TOGGLABLE, DejaDupTogglableIface))

typedef struct _DejaDupTogglable DejaDupTogglable;
typedef struct _DejaDupTogglableIface DejaDupTogglableIface;

#define DEJA_DUP_TYPE_CONFIG_SWITCH (deja_dup_config_switch_get_type ())
#define DEJA_DUP_CONFIG_SWITCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_SWITCH, DejaDupConfigSwitch))
#define DEJA_DUP_CONFIG_SWITCH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_SWITCH, DejaDupConfigSwitchClass))
#define DEJA_DUP_IS_CONFIG_SWITCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_SWITCH))
#define DEJA_DUP_IS_CONFIG_SWITCH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_SWITCH))
#define DEJA_DUP_CONFIG_SWITCH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_SWITCH, DejaDupConfigSwitchClass))

typedef struct _DejaDupConfigSwitch DejaDupConfigSwitch;
typedef struct _DejaDupConfigSwitchClass DejaDupConfigSwitchClass;
typedef struct _DejaDupConfigSwitchPrivate DejaDupConfigSwitchPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _DejaDupConfigSwitchSetFromConfigData DejaDupConfigSwitchSetFromConfigData;

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

struct _DejaDupTogglableIface {
	GTypeInterface parent_iface;
	gboolean (*get_active) (DejaDupTogglable* self);
};

struct _DejaDupConfigSwitch {
	DejaDupConfigWidget parent_instance;
	DejaDupConfigSwitchPrivate * priv;
	GtkSwitch* button;
	gboolean user_driven;
};

struct _DejaDupConfigSwitchClass {
	DejaDupConfigWidgetClass parent_class;
	void (*handle_toggled) (DejaDupConfigSwitch* self);
};

struct _DejaDupConfigSwitchSetFromConfigData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	DejaDupConfigSwitch* self;
	DejaDupSimpleSettings* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	gboolean _tmp3_;
	gboolean val;
	gboolean _tmp4_;
	gboolean prev;
	GtkSwitch* _tmp5_;
};


static gpointer deja_dup_config_switch_parent_class = NULL;
static DejaDupTogglableIface* deja_dup_config_switch_deja_dup_togglable_parent_iface = NULL;

GType deja_dup_config_widget_get_type (void) G_GNUC_CONST;
GType deja_dup_togglable_get_type (void) G_GNUC_CONST;
GType deja_dup_config_switch_get_type (void) G_GNUC_CONST;
enum  {
	DEJA_DUP_CONFIG_SWITCH_DUMMY_PROPERTY
};
DejaDupConfigSwitch* deja_dup_config_switch_new (const gchar* key, const gchar* ns);
DejaDupConfigSwitch* deja_dup_config_switch_construct (GType object_type, const gchar* key, const gchar* ns);
static gboolean deja_dup_config_switch_real_get_active (DejaDupTogglable* base);
static void deja_dup_config_switch_real_set_from_config_data_free (gpointer _data);
static void deja_dup_config_switch_real_set_from_config (DejaDupConfigWidget* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean deja_dup_config_switch_real_set_from_config_co (DejaDupConfigSwitchSetFromConfigData* _data_);
const gchar* deja_dup_config_widget_get_key (DejaDupConfigWidget* self);
void deja_dup_config_switch_handle_toggled (DejaDupConfigSwitch* self);
static void deja_dup_config_switch_real_handle_toggled (DejaDupConfigSwitch* self);
static GObject * deja_dup_config_switch_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
void deja_dup_config_widget_set_from_config (DejaDupConfigWidget* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void deja_dup_config_widget_set_from_config_finish (DejaDupConfigWidget* self, GAsyncResult* _res_);
static void _deja_dup_config_switch_handle_toggled_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void deja_dup_config_switch_finalize (GObject* obj);


DejaDupConfigSwitch* deja_dup_config_switch_construct (GType object_type, const gchar* key, const gchar* ns) {
	DejaDupConfigSwitch * self = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	g_return_val_if_fail (key != NULL, NULL);
	g_return_val_if_fail (ns != NULL, NULL);
	_tmp0_ = key;
	_tmp1_ = ns;
	self = (DejaDupConfigSwitch*) g_object_new (object_type, "key", _tmp0_, "ns", _tmp1_, NULL);
	return self;
}


DejaDupConfigSwitch* deja_dup_config_switch_new (const gchar* key, const gchar* ns) {
	return deja_dup_config_switch_construct (DEJA_DUP_TYPE_CONFIG_SWITCH, key, ns);
}


static gboolean deja_dup_config_switch_real_get_active (DejaDupTogglable* base) {
	DejaDupConfigSwitch * self;
	gboolean result = FALSE;
	GtkSwitch* _tmp0_;
	gboolean _tmp1_ = FALSE;
	self = (DejaDupConfigSwitch*) base;
	_tmp0_ = self->button;
	_tmp1_ = gtk_switch_get_active (_tmp0_);
	result = _tmp1_;
	return result;
}


static void deja_dup_config_switch_real_set_from_config_data_free (gpointer _data) {
	DejaDupConfigSwitchSetFromConfigData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (DejaDupConfigSwitchSetFromConfigData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void deja_dup_config_switch_real_set_from_config (DejaDupConfigWidget* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	DejaDupConfigSwitch * self;
	DejaDupConfigSwitchSetFromConfigData* _data_;
	DejaDupConfigSwitch* _tmp0_;
	self = (DejaDupConfigSwitch*) base;
	_data_ = g_slice_new0 (DejaDupConfigSwitchSetFromConfigData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, deja_dup_config_switch_real_set_from_config);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, deja_dup_config_switch_real_set_from_config_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	deja_dup_config_switch_real_set_from_config_co (_data_);
}


static void deja_dup_config_switch_real_set_from_config_finish (DejaDupConfigWidget* base, GAsyncResult* _res_) {
	DejaDupConfigSwitchSetFromConfigData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean deja_dup_config_switch_real_set_from_config_co (DejaDupConfigSwitchSetFromConfigData* _data_) {
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
	_data_->_tmp3_ = FALSE;
	_data_->_tmp3_ = g_settings_get_boolean ((GSettings*) _data_->_tmp0_, _data_->_tmp2_);
	_data_->val = _data_->_tmp3_;
	_data_->_tmp4_ = _data_->self->user_driven;
	_data_->prev = _data_->_tmp4_;
	_data_->self->user_driven = FALSE;
	_data_->_tmp5_ = _data_->self->button;
	gtk_switch_set_active (_data_->_tmp5_, _data_->val);
	_data_->self->user_driven = _data_->prev;
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void deja_dup_config_switch_real_handle_toggled (DejaDupConfigSwitch* self) {
	DejaDupSimpleSettings* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	GtkSwitch* _tmp3_;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_;
	_tmp0_ = ((DejaDupConfigWidget*) self)->settings;
	_tmp1_ = deja_dup_config_widget_get_key ((DejaDupConfigWidget*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = self->button;
	_tmp4_ = gtk_switch_get_active (_tmp3_);
	deja_dup_simple_settings_set_boolean (_tmp0_, _tmp2_, _tmp4_);
	_tmp5_ = self->user_driven;
	g_signal_emit_by_name ((DejaDupTogglable*) self, "toggled", (DejaDupTogglable*) self, _tmp5_);
}


void deja_dup_config_switch_handle_toggled (DejaDupConfigSwitch* self) {
	g_return_if_fail (self != NULL);
	DEJA_DUP_CONFIG_SWITCH_GET_CLASS (self)->handle_toggled (self);
}


static void _deja_dup_config_switch_handle_toggled_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
	deja_dup_config_switch_handle_toggled (self);
}


static GObject * deja_dup_config_switch_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	DejaDupConfigSwitch * self;
	GtkSwitch* _tmp0_;
	GtkSwitch* _tmp1_;
	GtkSwitch* _tmp2_;
	GtkSwitch* _tmp3_;
	parent_class = G_OBJECT_CLASS (deja_dup_config_switch_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = DEJA_DUP_CONFIG_SWITCH (obj);
	_tmp0_ = (GtkSwitch*) gtk_switch_new ();
	_tmp1_ = g_object_ref_sink (_tmp0_);
	_g_object_unref0 (self->button);
	self->button = _tmp1_;
	_tmp2_ = self->button;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp2_);
	deja_dup_config_widget_set_from_config ((DejaDupConfigWidget*) self, NULL, NULL);
	_tmp3_ = self->button;
	g_signal_connect_object ((GObject*) _tmp3_, "notify::active", (GCallback) _deja_dup_config_switch_handle_toggled_g_object_notify, self, 0);
	return obj;
}


static void deja_dup_config_switch_class_init (DejaDupConfigSwitchClass * klass) {
	deja_dup_config_switch_parent_class = g_type_class_peek_parent (klass);
	DEJA_DUP_CONFIG_WIDGET_CLASS (klass)->set_from_config = deja_dup_config_switch_real_set_from_config;
	DEJA_DUP_CONFIG_WIDGET_CLASS (klass)->set_from_config_finish = deja_dup_config_switch_real_set_from_config_finish;
	DEJA_DUP_CONFIG_SWITCH_CLASS (klass)->handle_toggled = deja_dup_config_switch_real_handle_toggled;
	G_OBJECT_CLASS (klass)->constructor = deja_dup_config_switch_constructor;
	G_OBJECT_CLASS (klass)->finalize = deja_dup_config_switch_finalize;
}


static void deja_dup_config_switch_deja_dup_togglable_interface_init (DejaDupTogglableIface * iface) {
	deja_dup_config_switch_deja_dup_togglable_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_active = (gboolean (*)(DejaDupTogglable*)) deja_dup_config_switch_real_get_active;
}


static void deja_dup_config_switch_instance_init (DejaDupConfigSwitch * self) {
	self->user_driven = TRUE;
}


static void deja_dup_config_switch_finalize (GObject* obj) {
	DejaDupConfigSwitch * self;
	self = DEJA_DUP_CONFIG_SWITCH (obj);
	_g_object_unref0 (self->button);
	G_OBJECT_CLASS (deja_dup_config_switch_parent_class)->finalize (obj);
}


GType deja_dup_config_switch_get_type (void) {
	static volatile gsize deja_dup_config_switch_type_id__volatile = 0;
	if (g_once_init_enter (&deja_dup_config_switch_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DejaDupConfigSwitchClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) deja_dup_config_switch_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DejaDupConfigSwitch), 0, (GInstanceInitFunc) deja_dup_config_switch_instance_init, NULL };
		static const GInterfaceInfo deja_dup_togglable_info = { (GInterfaceInitFunc) deja_dup_config_switch_deja_dup_togglable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType deja_dup_config_switch_type_id;
		deja_dup_config_switch_type_id = g_type_register_static (DEJA_DUP_TYPE_CONFIG_WIDGET, "DejaDupConfigSwitch", &g_define_type_info, 0);
		g_type_add_interface_static (deja_dup_config_switch_type_id, DEJA_DUP_TYPE_TOGGLABLE, &deja_dup_togglable_info);
		g_once_init_leave (&deja_dup_config_switch_type_id__volatile, deja_dup_config_switch_type_id);
	}
	return deja_dup_config_switch_type_id__volatile;
}


