/* ConfigLocationSSH.c generated by valac 0.16.1, the Vala compiler
 * generated from ConfigLocationSSH.vala, do not modify */

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
#include <glib/gi18n-lib.h>
#include <common.h>


#define DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE (deja_dup_config_location_table_get_type ())
#define DEJA_DUP_CONFIG_LOCATION_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, DejaDupConfigLocationTable))
#define DEJA_DUP_CONFIG_LOCATION_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, DejaDupConfigLocationTableClass))
#define DEJA_DUP_IS_CONFIG_LOCATION_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE))
#define DEJA_DUP_IS_CONFIG_LOCATION_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE))
#define DEJA_DUP_CONFIG_LOCATION_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, DejaDupConfigLocationTableClass))

typedef struct _DejaDupConfigLocationTable DejaDupConfigLocationTable;
typedef struct _DejaDupConfigLocationTableClass DejaDupConfigLocationTableClass;
typedef struct _DejaDupConfigLocationTablePrivate DejaDupConfigLocationTablePrivate;

#define DEJA_DUP_TYPE_CONFIG_LOCATION_SSH (deja_dup_config_location_ssh_get_type ())
#define DEJA_DUP_CONFIG_LOCATION_SSH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_SSH, DejaDupConfigLocationSSH))
#define DEJA_DUP_CONFIG_LOCATION_SSH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_LOCATION_SSH, DejaDupConfigLocationSSHClass))
#define DEJA_DUP_IS_CONFIG_LOCATION_SSH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_SSH))
#define DEJA_DUP_IS_CONFIG_LOCATION_SSH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_LOCATION_SSH))
#define DEJA_DUP_CONFIG_LOCATION_SSH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_LOCATION_SSH, DejaDupConfigLocationSSHClass))

typedef struct _DejaDupConfigLocationSSH DejaDupConfigLocationSSH;
typedef struct _DejaDupConfigLocationSSHClass DejaDupConfigLocationSSHClass;
typedef struct _DejaDupConfigLocationSSHPrivate DejaDupConfigLocationSSHPrivate;

#define DEJA_DUP_TYPE_TOGGLABLE (deja_dup_togglable_get_type ())
#define DEJA_DUP_TOGGLABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_TOGGLABLE, DejaDupTogglable))
#define DEJA_DUP_IS_TOGGLABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_TOGGLABLE))
#define DEJA_DUP_TOGGLABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DEJA_DUP_TYPE_TOGGLABLE, DejaDupTogglableIface))

typedef struct _DejaDupTogglable DejaDupTogglable;
typedef struct _DejaDupTogglableIface DejaDupTogglableIface;

#define DEJA_DUP_CONFIG_URL_PART_TYPE_PART (deja_dup_config_url_part_part_get_type ())

#define DEJA_DUP_TYPE_CONFIG_WIDGET (deja_dup_config_widget_get_type ())
#define DEJA_DUP_CONFIG_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidget))
#define DEJA_DUP_CONFIG_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidgetClass))
#define DEJA_DUP_IS_CONFIG_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET))
#define DEJA_DUP_IS_CONFIG_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_WIDGET))
#define DEJA_DUP_CONFIG_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_WIDGET, DejaDupConfigWidgetClass))

typedef struct _DejaDupConfigWidget DejaDupConfigWidget;
typedef struct _DejaDupConfigWidgetClass DejaDupConfigWidgetClass;

#define DEJA_DUP_TYPE_CONFIG_ENTRY (deja_dup_config_entry_get_type ())
#define DEJA_DUP_CONFIG_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_ENTRY, DejaDupConfigEntry))
#define DEJA_DUP_CONFIG_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_ENTRY, DejaDupConfigEntryClass))
#define DEJA_DUP_IS_CONFIG_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_ENTRY))
#define DEJA_DUP_IS_CONFIG_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_ENTRY))
#define DEJA_DUP_CONFIG_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_ENTRY, DejaDupConfigEntryClass))

typedef struct _DejaDupConfigEntry DejaDupConfigEntry;
typedef struct _DejaDupConfigEntryClass DejaDupConfigEntryClass;

#define DEJA_DUP_TYPE_CONFIG_URL_PART (deja_dup_config_url_part_get_type ())
#define DEJA_DUP_CONFIG_URL_PART(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CONFIG_URL_PART, DejaDupConfigURLPart))
#define DEJA_DUP_CONFIG_URL_PART_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CONFIG_URL_PART, DejaDupConfigURLPartClass))
#define DEJA_DUP_IS_CONFIG_URL_PART(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CONFIG_URL_PART))
#define DEJA_DUP_IS_CONFIG_URL_PART_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CONFIG_URL_PART))
#define DEJA_DUP_CONFIG_URL_PART_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CONFIG_URL_PART, DejaDupConfigURLPartClass))

typedef struct _DejaDupConfigURLPart DejaDupConfigURLPart;
typedef struct _DejaDupConfigURLPartClass DejaDupConfigURLPartClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _DejaDupConfigLocationTable {
	GtkGrid parent_instance;
	DejaDupConfigLocationTablePrivate * priv;
	gint row;
};

struct _DejaDupConfigLocationTableClass {
	GtkGridClass parent_class;
};

struct _DejaDupConfigLocationSSH {
	DejaDupConfigLocationTable parent_instance;
	DejaDupConfigLocationSSHPrivate * priv;
};

struct _DejaDupConfigLocationSSHClass {
	DejaDupConfigLocationTableClass parent_class;
};

struct _DejaDupTogglableIface {
	GTypeInterface parent_iface;
	gboolean (*get_active) (DejaDupTogglable* self);
};

typedef enum  {
	DEJA_DUP_CONFIG_URL_PART_PART_SCHEME,
	DEJA_DUP_CONFIG_URL_PART_PART_SERVER,
	DEJA_DUP_CONFIG_URL_PART_PART_PORT,
	DEJA_DUP_CONFIG_URL_PART_PART_USER,
	DEJA_DUP_CONFIG_URL_PART_PART_FOLDER,
	DEJA_DUP_CONFIG_URL_PART_PART_DOMAIN
} DejaDupConfigURLPartPart;


static gpointer deja_dup_config_location_ssh_parent_class = NULL;

GType deja_dup_config_location_table_get_type (void) G_GNUC_CONST;
GType deja_dup_config_location_ssh_get_type (void) G_GNUC_CONST;
enum  {
	DEJA_DUP_CONFIG_LOCATION_SSH_DUMMY_PROPERTY
};
DejaDupConfigLocationSSH* deja_dup_config_location_ssh_new (GtkSizeGroup* sg);
DejaDupConfigLocationSSH* deja_dup_config_location_ssh_construct (GType object_type, GtkSizeGroup* sg);
static GObject * deja_dup_config_location_ssh_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
GType deja_dup_togglable_get_type (void) G_GNUC_CONST;
void deja_dup_config_location_table_add_widget (DejaDupConfigLocationTable* self, const gchar* msg, GtkWidget* w, DejaDupTogglable* check, GtkWidget* mnemonic);
GType deja_dup_config_url_part_part_get_type (void) G_GNUC_CONST;
DejaDupConfigURLPart* deja_dup_config_url_part_new (DejaDupConfigURLPartPart part, const gchar* key, const gchar* ns);
DejaDupConfigURLPart* deja_dup_config_url_part_construct (GType object_type, DejaDupConfigURLPartPart part, const gchar* key, const gchar* ns);
GType deja_dup_config_widget_get_type (void) G_GNUC_CONST;
GType deja_dup_config_entry_get_type (void) G_GNUC_CONST;
GType deja_dup_config_url_part_get_type (void) G_GNUC_CONST;


DejaDupConfigLocationSSH* deja_dup_config_location_ssh_construct (GType object_type, GtkSizeGroup* sg) {
	DejaDupConfigLocationSSH * self = NULL;
	GtkSizeGroup* _tmp0_;
	g_return_val_if_fail (sg != NULL, NULL);
	_tmp0_ = sg;
	self = (DejaDupConfigLocationSSH*) g_object_new (object_type, "label-sizes", _tmp0_, NULL);
	return self;
}


DejaDupConfigLocationSSH* deja_dup_config_location_ssh_new (GtkSizeGroup* sg) {
	return deja_dup_config_location_ssh_construct (DEJA_DUP_TYPE_CONFIG_LOCATION_SSH, sg);
}


static GObject * deja_dup_config_location_ssh_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	DejaDupConfigLocationSSH * self;
	const gchar* _tmp0_ = NULL;
	DejaDupConfigURLPart* _tmp1_;
	DejaDupConfigURLPart* _tmp2_;
	const gchar* _tmp3_ = NULL;
	DejaDupConfigURLPart* _tmp4_;
	DejaDupConfigURLPart* _tmp5_;
	const gchar* _tmp6_ = NULL;
	DejaDupConfigURLPart* _tmp7_;
	DejaDupConfigURLPart* _tmp8_;
	const gchar* _tmp9_ = NULL;
	DejaDupConfigURLPart* _tmp10_;
	DejaDupConfigURLPart* _tmp11_;
	parent_class = G_OBJECT_CLASS (deja_dup_config_location_ssh_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = DEJA_DUP_CONFIG_LOCATION_SSH (obj);
	_tmp0_ = _ ("_Server");
	_tmp1_ = deja_dup_config_url_part_new (DEJA_DUP_CONFIG_URL_PART_PART_SERVER, DEJA_DUP_FILE_PATH_KEY, DEJA_DUP_FILE_ROOT);
	_tmp2_ = g_object_ref_sink (_tmp1_);
	deja_dup_config_location_table_add_widget ((DejaDupConfigLocationTable*) self, _tmp0_, (GtkWidget*) _tmp2_, NULL, NULL);
	_g_object_unref0 (_tmp2_);
	_tmp3_ = _ ("_Port");
	_tmp4_ = deja_dup_config_url_part_new (DEJA_DUP_CONFIG_URL_PART_PART_PORT, DEJA_DUP_FILE_PATH_KEY, DEJA_DUP_FILE_ROOT);
	_tmp5_ = g_object_ref_sink (_tmp4_);
	deja_dup_config_location_table_add_widget ((DejaDupConfigLocationTable*) self, _tmp3_, (GtkWidget*) _tmp5_, NULL, NULL);
	_g_object_unref0 (_tmp5_);
	_tmp6_ = _ ("_Folder");
	_tmp7_ = deja_dup_config_url_part_new (DEJA_DUP_CONFIG_URL_PART_PART_FOLDER, DEJA_DUP_FILE_PATH_KEY, DEJA_DUP_FILE_ROOT);
	_tmp8_ = g_object_ref_sink (_tmp7_);
	deja_dup_config_location_table_add_widget ((DejaDupConfigLocationTable*) self, _tmp6_, (GtkWidget*) _tmp8_, NULL, NULL);
	_g_object_unref0 (_tmp8_);
	_tmp9_ = _ ("_Username");
	_tmp10_ = deja_dup_config_url_part_new (DEJA_DUP_CONFIG_URL_PART_PART_USER, DEJA_DUP_FILE_PATH_KEY, DEJA_DUP_FILE_ROOT);
	_tmp11_ = g_object_ref_sink (_tmp10_);
	deja_dup_config_location_table_add_widget ((DejaDupConfigLocationTable*) self, _tmp9_, (GtkWidget*) _tmp11_, NULL, NULL);
	_g_object_unref0 (_tmp11_);
	return obj;
}


static void deja_dup_config_location_ssh_class_init (DejaDupConfigLocationSSHClass * klass) {
	deja_dup_config_location_ssh_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->constructor = deja_dup_config_location_ssh_constructor;
}


static void deja_dup_config_location_ssh_instance_init (DejaDupConfigLocationSSH * self) {
}


GType deja_dup_config_location_ssh_get_type (void) {
	static volatile gsize deja_dup_config_location_ssh_type_id__volatile = 0;
	if (g_once_init_enter (&deja_dup_config_location_ssh_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DejaDupConfigLocationSSHClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) deja_dup_config_location_ssh_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DejaDupConfigLocationSSH), 0, (GInstanceInitFunc) deja_dup_config_location_ssh_instance_init, NULL };
		GType deja_dup_config_location_ssh_type_id;
		deja_dup_config_location_ssh_type_id = g_type_register_static (DEJA_DUP_TYPE_CONFIG_LOCATION_TABLE, "DejaDupConfigLocationSSH", &g_define_type_info, 0);
		g_once_init_leave (&deja_dup_config_location_ssh_type_id__volatile, deja_dup_config_location_ssh_type_id);
	}
	return deja_dup_config_location_ssh_type_id__volatile;
}


