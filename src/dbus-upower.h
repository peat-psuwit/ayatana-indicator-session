/*
 * Generated by gdbus-codegen 2.33.3. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __DBUS_UPOWER_H__
#define __DBUS_UPOWER_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.UPower */

#define DBUS_TYPE_UPOWER (dbus_upower_get_type ())
#define DBUS_UPOWER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBUS_TYPE_UPOWER, DBusUPower))
#define DBUS_IS_UPOWER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBUS_TYPE_UPOWER))
#define DBUS_UPOWER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), DBUS_TYPE_UPOWER, DBusUPowerIface))

struct _DBusUPower;
typedef struct _DBusUPower DBusUPower;
typedef struct _DBusUPowerIface DBusUPowerIface;

struct _DBusUPowerIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_about_to_sleep) (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_enumerate_devices) (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hibernate) (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hibernate_allowed) (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_suspend) (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_suspend_allowed) (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

  gboolean  (*get_can_hibernate) (DBusUPower *object);

  gboolean  (*get_can_suspend) (DBusUPower *object);

  const gchar * (*get_daemon_version) (DBusUPower *object);

  gboolean  (*get_lid_is_closed) (DBusUPower *object);

  gboolean  (*get_lid_is_present) (DBusUPower *object);

  gboolean  (*get_on_battery) (DBusUPower *object);

  gboolean  (*get_on_low_battery) (DBusUPower *object);

  void (*changed) (
    DBusUPower *object);

  void (*device_added) (
    DBusUPower *object,
    const gchar *arg_device);

  void (*device_changed) (
    DBusUPower *object,
    const gchar *arg_device);

  void (*device_removed) (
    DBusUPower *object,
    const gchar *arg_device);

  void (*resuming) (
    DBusUPower *object);

  void (*sleeping) (
    DBusUPower *object);

};

GType dbus_upower_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *dbus_upower_interface_info (void);
guint dbus_upower_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void dbus_upower_complete_enumerate_devices (
    DBusUPower *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *devices);

void dbus_upower_complete_about_to_sleep (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

void dbus_upower_complete_suspend (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

void dbus_upower_complete_suspend_allowed (
    DBusUPower *object,
    GDBusMethodInvocation *invocation,
    gboolean allowed);

void dbus_upower_complete_hibernate (
    DBusUPower *object,
    GDBusMethodInvocation *invocation);

void dbus_upower_complete_hibernate_allowed (
    DBusUPower *object,
    GDBusMethodInvocation *invocation,
    gboolean allowed);



/* D-Bus signal emissions functions: */
void dbus_upower_emit_device_added (
    DBusUPower *object,
    const gchar *arg_device);

void dbus_upower_emit_device_removed (
    DBusUPower *object,
    const gchar *arg_device);

void dbus_upower_emit_device_changed (
    DBusUPower *object,
    const gchar *arg_device);

void dbus_upower_emit_changed (
    DBusUPower *object);

void dbus_upower_emit_sleeping (
    DBusUPower *object);

void dbus_upower_emit_resuming (
    DBusUPower *object);



/* D-Bus method calls: */
void dbus_upower_call_enumerate_devices (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_upower_call_enumerate_devices_finish (
    DBusUPower *proxy,
    gchar ***out_devices,
    GAsyncResult *res,
    GError **error);

gboolean dbus_upower_call_enumerate_devices_sync (
    DBusUPower *proxy,
    gchar ***out_devices,
    GCancellable *cancellable,
    GError **error);

void dbus_upower_call_about_to_sleep (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_upower_call_about_to_sleep_finish (
    DBusUPower *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_upower_call_about_to_sleep_sync (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GError **error);

void dbus_upower_call_suspend (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_upower_call_suspend_finish (
    DBusUPower *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_upower_call_suspend_sync (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GError **error);

void dbus_upower_call_suspend_allowed (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_upower_call_suspend_allowed_finish (
    DBusUPower *proxy,
    gboolean *out_allowed,
    GAsyncResult *res,
    GError **error);

gboolean dbus_upower_call_suspend_allowed_sync (
    DBusUPower *proxy,
    gboolean *out_allowed,
    GCancellable *cancellable,
    GError **error);

void dbus_upower_call_hibernate (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_upower_call_hibernate_finish (
    DBusUPower *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_upower_call_hibernate_sync (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GError **error);

void dbus_upower_call_hibernate_allowed (
    DBusUPower *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_upower_call_hibernate_allowed_finish (
    DBusUPower *proxy,
    gboolean *out_allowed,
    GAsyncResult *res,
    GError **error);

gboolean dbus_upower_call_hibernate_allowed_sync (
    DBusUPower *proxy,
    gboolean *out_allowed,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *dbus_upower_get_daemon_version (DBusUPower *object);
gchar *dbus_upower_dup_daemon_version (DBusUPower *object);
void dbus_upower_set_daemon_version (DBusUPower *object, const gchar *value);

gboolean dbus_upower_get_can_suspend (DBusUPower *object);
void dbus_upower_set_can_suspend (DBusUPower *object, gboolean value);

gboolean dbus_upower_get_can_hibernate (DBusUPower *object);
void dbus_upower_set_can_hibernate (DBusUPower *object, gboolean value);

gboolean dbus_upower_get_on_battery (DBusUPower *object);
void dbus_upower_set_on_battery (DBusUPower *object, gboolean value);

gboolean dbus_upower_get_on_low_battery (DBusUPower *object);
void dbus_upower_set_on_low_battery (DBusUPower *object, gboolean value);

gboolean dbus_upower_get_lid_is_closed (DBusUPower *object);
void dbus_upower_set_lid_is_closed (DBusUPower *object, gboolean value);

gboolean dbus_upower_get_lid_is_present (DBusUPower *object);
void dbus_upower_set_lid_is_present (DBusUPower *object, gboolean value);


/* ---- */

#define DBUS_TYPE_UPOWER_PROXY (dbus_upower_proxy_get_type ())
#define DBUS_UPOWER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBUS_TYPE_UPOWER_PROXY, DBusUPowerProxy))
#define DBUS_UPOWER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), DBUS_TYPE_UPOWER_PROXY, DBusUPowerProxyClass))
#define DBUS_UPOWER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), DBUS_TYPE_UPOWER_PROXY, DBusUPowerProxyClass))
#define DBUS_IS_UPOWER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBUS_TYPE_UPOWER_PROXY))
#define DBUS_IS_UPOWER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), DBUS_TYPE_UPOWER_PROXY))

typedef struct _DBusUPowerProxy DBusUPowerProxy;
typedef struct _DBusUPowerProxyClass DBusUPowerProxyClass;
typedef struct _DBusUPowerProxyPrivate DBusUPowerProxyPrivate;

struct _DBusUPowerProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  DBusUPowerProxyPrivate *priv;
};

struct _DBusUPowerProxyClass
{
  GDBusProxyClass parent_class;
};

GType dbus_upower_proxy_get_type (void) G_GNUC_CONST;

void dbus_upower_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
DBusUPower *dbus_upower_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
DBusUPower *dbus_upower_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void dbus_upower_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
DBusUPower *dbus_upower_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
DBusUPower *dbus_upower_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define DBUS_TYPE_UPOWER_SKELETON (dbus_upower_skeleton_get_type ())
#define DBUS_UPOWER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBUS_TYPE_UPOWER_SKELETON, DBusUPowerSkeleton))
#define DBUS_UPOWER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), DBUS_TYPE_UPOWER_SKELETON, DBusUPowerSkeletonClass))
#define DBUS_UPOWER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), DBUS_TYPE_UPOWER_SKELETON, DBusUPowerSkeletonClass))
#define DBUS_IS_UPOWER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBUS_TYPE_UPOWER_SKELETON))
#define DBUS_IS_UPOWER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), DBUS_TYPE_UPOWER_SKELETON))

typedef struct _DBusUPowerSkeleton DBusUPowerSkeleton;
typedef struct _DBusUPowerSkeletonClass DBusUPowerSkeletonClass;
typedef struct _DBusUPowerSkeletonPrivate DBusUPowerSkeletonPrivate;

struct _DBusUPowerSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  DBusUPowerSkeletonPrivate *priv;
};

struct _DBusUPowerSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType dbus_upower_skeleton_get_type (void) G_GNUC_CONST;

DBusUPower *dbus_upower_skeleton_new (void);


G_END_DECLS

#endif /* __DBUS_UPOWER_H__ */
