/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusFileInfo -p dbusfileinfo com.deepin.filemanager.Backend.FileInfo.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSFILEINFO_H_1457752112
#define DBUSFILEINFO_H_1457752112

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.filemanager.Backend.FileInfo
 */
class DBusFileInfo: public QDBusAbstractInterface
{
    Q_OBJECT

    Q_SLOT void __propertyChanged__(const QDBusMessage& msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName !="com.deepin.filemanager.Backend.FileInfo")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        foreach(const QString &prop, changedProps.keys()) {
        const QMetaObject* self = metaObject();
            for (int i=self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
 	            Q_EMIT p.notifySignal().invoke(this);
                }
            }
        }
   }
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.filemanager.Backend.FileInfo"; }

public:
    explicit DBusFileInfo(QObject *parent = 0);

    ~DBusFileInfo();

    Q_PROPERTY(uint DriveStartStopTypeMultidisk READ driveStartStopTypeMultidisk NOTIFY DriveStartStopTypeMultidiskChanged)
    inline uint driveStartStopTypeMultidisk() const
    { return qvariant_cast< uint >(property("DriveStartStopTypeMultidisk")); }

    Q_PROPERTY(uint DriveStartStopTypeNetwork READ driveStartStopTypeNetwork NOTIFY DriveStartStopTypeNetworkChanged)
    inline uint driveStartStopTypeNetwork() const
    { return qvariant_cast< uint >(property("DriveStartStopTypeNetwork")); }

    Q_PROPERTY(uint DriveStartStopTypePassword READ driveStartStopTypePassword NOTIFY DriveStartStopTypePasswordChanged)
    inline uint driveStartStopTypePassword() const
    { return qvariant_cast< uint >(property("DriveStartStopTypePassword")); }

    Q_PROPERTY(uint DriveStartStopTypeShutdown READ driveStartStopTypeShutdown NOTIFY DriveStartStopTypeShutdownChanged)
    inline uint driveStartStopTypeShutdown() const
    { return qvariant_cast< uint >(property("DriveStartStopTypeShutdown")); }

    Q_PROPERTY(uint DriveStartStopTypeUnknown READ driveStartStopTypeUnknown NOTIFY DriveStartStopTypeUnknownChanged)
    inline uint driveStartStopTypeUnknown() const
    { return qvariant_cast< uint >(property("DriveStartStopTypeUnknown")); }

    Q_PROPERTY(QString FileAttributeAccessCanDelete READ fileAttributeAccessCanDelete NOTIFY FileAttributeAccessCanDeleteChanged)
    inline QString fileAttributeAccessCanDelete() const
    { return qvariant_cast< QString >(property("FileAttributeAccessCanDelete")); }

    Q_PROPERTY(QString FileAttributeAccessCanExecute READ fileAttributeAccessCanExecute NOTIFY FileAttributeAccessCanExecuteChanged)
    inline QString fileAttributeAccessCanExecute() const
    { return qvariant_cast< QString >(property("FileAttributeAccessCanExecute")); }

    Q_PROPERTY(QString FileAttributeAccessCanRead READ fileAttributeAccessCanRead NOTIFY FileAttributeAccessCanReadChanged)
    inline QString fileAttributeAccessCanRead() const
    { return qvariant_cast< QString >(property("FileAttributeAccessCanRead")); }

    Q_PROPERTY(QString FileAttributeAccessCanRename READ fileAttributeAccessCanRename NOTIFY FileAttributeAccessCanRenameChanged)
    inline QString fileAttributeAccessCanRename() const
    { return qvariant_cast< QString >(property("FileAttributeAccessCanRename")); }

    Q_PROPERTY(QString FileAttributeAccessCanTrash READ fileAttributeAccessCanTrash NOTIFY FileAttributeAccessCanTrashChanged)
    inline QString fileAttributeAccessCanTrash() const
    { return qvariant_cast< QString >(property("FileAttributeAccessCanTrash")); }

    Q_PROPERTY(QString FileAttributeAccessCanWrite READ fileAttributeAccessCanWrite NOTIFY FileAttributeAccessCanWriteChanged)
    inline QString fileAttributeAccessCanWrite() const
    { return qvariant_cast< QString >(property("FileAttributeAccessCanWrite")); }

    Q_PROPERTY(QString FileAttributeDosIsArchive READ fileAttributeDosIsArchive NOTIFY FileAttributeDosIsArchiveChanged)
    inline QString fileAttributeDosIsArchive() const
    { return qvariant_cast< QString >(property("FileAttributeDosIsArchive")); }

    Q_PROPERTY(QString FileAttributeDosIsSystem READ fileAttributeDosIsSystem NOTIFY FileAttributeDosIsSystemChanged)
    inline QString fileAttributeDosIsSystem() const
    { return qvariant_cast< QString >(property("FileAttributeDosIsSystem")); }

    Q_PROPERTY(QString FileAttributeEtagValue READ fileAttributeEtagValue NOTIFY FileAttributeEtagValueChanged)
    inline QString fileAttributeEtagValue() const
    { return qvariant_cast< QString >(property("FileAttributeEtagValue")); }

    Q_PROPERTY(QString FileAttributeFilesystemFree READ fileAttributeFilesystemFree NOTIFY FileAttributeFilesystemFreeChanged)
    inline QString fileAttributeFilesystemFree() const
    { return qvariant_cast< QString >(property("FileAttributeFilesystemFree")); }

    Q_PROPERTY(QString FileAttributeFilesystemReadonly READ fileAttributeFilesystemReadonly NOTIFY FileAttributeFilesystemReadonlyChanged)
    inline QString fileAttributeFilesystemReadonly() const
    { return qvariant_cast< QString >(property("FileAttributeFilesystemReadonly")); }

    Q_PROPERTY(QString FileAttributeFilesystemSize READ fileAttributeFilesystemSize NOTIFY FileAttributeFilesystemSizeChanged)
    inline QString fileAttributeFilesystemSize() const
    { return qvariant_cast< QString >(property("FileAttributeFilesystemSize")); }

    Q_PROPERTY(QString FileAttributeFilesystemType READ fileAttributeFilesystemType NOTIFY FileAttributeFilesystemTypeChanged)
    inline QString fileAttributeFilesystemType() const
    { return qvariant_cast< QString >(property("FileAttributeFilesystemType")); }

    Q_PROPERTY(QString FileAttributeFilesystemUsePreview READ fileAttributeFilesystemUsePreview NOTIFY FileAttributeFilesystemUsePreviewChanged)
    inline QString fileAttributeFilesystemUsePreview() const
    { return qvariant_cast< QString >(property("FileAttributeFilesystemUsePreview")); }

    Q_PROPERTY(QString FileAttributeFilesystemUsed READ fileAttributeFilesystemUsed NOTIFY FileAttributeFilesystemUsedChanged)
    inline QString fileAttributeFilesystemUsed() const
    { return qvariant_cast< QString >(property("FileAttributeFilesystemUsed")); }

    Q_PROPERTY(QString FileAttributeGvfsBackend READ fileAttributeGvfsBackend NOTIFY FileAttributeGvfsBackendChanged)
    inline QString fileAttributeGvfsBackend() const
    { return qvariant_cast< QString >(property("FileAttributeGvfsBackend")); }

    Q_PROPERTY(QString FileAttributeIdFile READ fileAttributeIdFile NOTIFY FileAttributeIdFileChanged)
    inline QString fileAttributeIdFile() const
    { return qvariant_cast< QString >(property("FileAttributeIdFile")); }

    Q_PROPERTY(QString FileAttributeIdFilesystem READ fileAttributeIdFilesystem NOTIFY FileAttributeIdFilesystemChanged)
    inline QString fileAttributeIdFilesystem() const
    { return qvariant_cast< QString >(property("FileAttributeIdFilesystem")); }

    Q_PROPERTY(QString FileAttributeMountableCanEject READ fileAttributeMountableCanEject NOTIFY FileAttributeMountableCanEjectChanged)
    inline QString fileAttributeMountableCanEject() const
    { return qvariant_cast< QString >(property("FileAttributeMountableCanEject")); }

    Q_PROPERTY(QString FileAttributeMountableCanMount READ fileAttributeMountableCanMount NOTIFY FileAttributeMountableCanMountChanged)
    inline QString fileAttributeMountableCanMount() const
    { return qvariant_cast< QString >(property("FileAttributeMountableCanMount")); }

    Q_PROPERTY(QString FileAttributeMountableCanPoll READ fileAttributeMountableCanPoll NOTIFY FileAttributeMountableCanPollChanged)
    inline QString fileAttributeMountableCanPoll() const
    { return qvariant_cast< QString >(property("FileAttributeMountableCanPoll")); }

    Q_PROPERTY(QString FileAttributeMountableCanStart READ fileAttributeMountableCanStart NOTIFY FileAttributeMountableCanStartChanged)
    inline QString fileAttributeMountableCanStart() const
    { return qvariant_cast< QString >(property("FileAttributeMountableCanStart")); }

    Q_PROPERTY(QString FileAttributeMountableCanStartDegraded READ fileAttributeMountableCanStartDegraded NOTIFY FileAttributeMountableCanStartDegradedChanged)
    inline QString fileAttributeMountableCanStartDegraded() const
    { return qvariant_cast< QString >(property("FileAttributeMountableCanStartDegraded")); }

    Q_PROPERTY(QString FileAttributeMountableCanStop READ fileAttributeMountableCanStop NOTIFY FileAttributeMountableCanStopChanged)
    inline QString fileAttributeMountableCanStop() const
    { return qvariant_cast< QString >(property("FileAttributeMountableCanStop")); }

    Q_PROPERTY(QString FileAttributeMountableCanUnmount READ fileAttributeMountableCanUnmount NOTIFY FileAttributeMountableCanUnmountChanged)
    inline QString fileAttributeMountableCanUnmount() const
    { return qvariant_cast< QString >(property("FileAttributeMountableCanUnmount")); }

    Q_PROPERTY(QString FileAttributeMountableHalUdi READ fileAttributeMountableHalUdi NOTIFY FileAttributeMountableHalUdiChanged)
    inline QString fileAttributeMountableHalUdi() const
    { return qvariant_cast< QString >(property("FileAttributeMountableHalUdi")); }

    Q_PROPERTY(QString FileAttributeMountableIsMediaCheckAutomatic READ fileAttributeMountableIsMediaCheckAutomatic NOTIFY FileAttributeMountableIsMediaCheckAutomaticChanged)
    inline QString fileAttributeMountableIsMediaCheckAutomatic() const
    { return qvariant_cast< QString >(property("FileAttributeMountableIsMediaCheckAutomatic")); }

    Q_PROPERTY(QString FileAttributeMountableStartStopType READ fileAttributeMountableStartStopType NOTIFY FileAttributeMountableStartStopTypeChanged)
    inline QString fileAttributeMountableStartStopType() const
    { return qvariant_cast< QString >(property("FileAttributeMountableStartStopType")); }

    Q_PROPERTY(QString FileAttributeMountableUnixDevice READ fileAttributeMountableUnixDevice NOTIFY FileAttributeMountableUnixDeviceChanged)
    inline QString fileAttributeMountableUnixDevice() const
    { return qvariant_cast< QString >(property("FileAttributeMountableUnixDevice")); }

    Q_PROPERTY(QString FileAttributeMountableUnixDeviceFile READ fileAttributeMountableUnixDeviceFile NOTIFY FileAttributeMountableUnixDeviceFileChanged)
    inline QString fileAttributeMountableUnixDeviceFile() const
    { return qvariant_cast< QString >(property("FileAttributeMountableUnixDeviceFile")); }

    Q_PROPERTY(QString FileAttributeOwnerGroup READ fileAttributeOwnerGroup NOTIFY FileAttributeOwnerGroupChanged)
    inline QString fileAttributeOwnerGroup() const
    { return qvariant_cast< QString >(property("FileAttributeOwnerGroup")); }

    Q_PROPERTY(QString FileAttributeOwnerUser READ fileAttributeOwnerUser NOTIFY FileAttributeOwnerUserChanged)
    inline QString fileAttributeOwnerUser() const
    { return qvariant_cast< QString >(property("FileAttributeOwnerUser")); }

    Q_PROPERTY(QString FileAttributeOwnerUserReal READ fileAttributeOwnerUserReal NOTIFY FileAttributeOwnerUserRealChanged)
    inline QString fileAttributeOwnerUserReal() const
    { return qvariant_cast< QString >(property("FileAttributeOwnerUserReal")); }

    Q_PROPERTY(QString FileAttributeSelinuxContext READ fileAttributeSelinuxContext NOTIFY FileAttributeSelinuxContextChanged)
    inline QString fileAttributeSelinuxContext() const
    { return qvariant_cast< QString >(property("FileAttributeSelinuxContext")); }

    Q_PROPERTY(QString FileAttributeStandardAllocatedSize READ fileAttributeStandardAllocatedSize NOTIFY FileAttributeStandardAllocatedSizeChanged)
    inline QString fileAttributeStandardAllocatedSize() const
    { return qvariant_cast< QString >(property("FileAttributeStandardAllocatedSize")); }

    Q_PROPERTY(QString FileAttributeStandardContentType READ fileAttributeStandardContentType NOTIFY FileAttributeStandardContentTypeChanged)
    inline QString fileAttributeStandardContentType() const
    { return qvariant_cast< QString >(property("FileAttributeStandardContentType")); }

    Q_PROPERTY(QString FileAttributeStandardCopyName READ fileAttributeStandardCopyName NOTIFY FileAttributeStandardCopyNameChanged)
    inline QString fileAttributeStandardCopyName() const
    { return qvariant_cast< QString >(property("FileAttributeStandardCopyName")); }

    Q_PROPERTY(QString FileAttributeStandardDescription READ fileAttributeStandardDescription NOTIFY FileAttributeStandardDescriptionChanged)
    inline QString fileAttributeStandardDescription() const
    { return qvariant_cast< QString >(property("FileAttributeStandardDescription")); }

    Q_PROPERTY(QString FileAttributeStandardDisplayName READ fileAttributeStandardDisplayName NOTIFY FileAttributeStandardDisplayNameChanged)
    inline QString fileAttributeStandardDisplayName() const
    { return qvariant_cast< QString >(property("FileAttributeStandardDisplayName")); }

    Q_PROPERTY(QString FileAttributeStandardEditName READ fileAttributeStandardEditName NOTIFY FileAttributeStandardEditNameChanged)
    inline QString fileAttributeStandardEditName() const
    { return qvariant_cast< QString >(property("FileAttributeStandardEditName")); }

    Q_PROPERTY(QString FileAttributeStandardFastContentType READ fileAttributeStandardFastContentType NOTIFY FileAttributeStandardFastContentTypeChanged)
    inline QString fileAttributeStandardFastContentType() const
    { return qvariant_cast< QString >(property("FileAttributeStandardFastContentType")); }

    Q_PROPERTY(QString FileAttributeStandardIsBackup READ fileAttributeStandardIsBackup NOTIFY FileAttributeStandardIsBackupChanged)
    inline QString fileAttributeStandardIsBackup() const
    { return qvariant_cast< QString >(property("FileAttributeStandardIsBackup")); }

    Q_PROPERTY(QString FileAttributeStandardIsHidden READ fileAttributeStandardIsHidden NOTIFY FileAttributeStandardIsHiddenChanged)
    inline QString fileAttributeStandardIsHidden() const
    { return qvariant_cast< QString >(property("FileAttributeStandardIsHidden")); }

    Q_PROPERTY(QString FileAttributeStandardIsSymlink READ fileAttributeStandardIsSymlink NOTIFY FileAttributeStandardIsSymlinkChanged)
    inline QString fileAttributeStandardIsSymlink() const
    { return qvariant_cast< QString >(property("FileAttributeStandardIsSymlink")); }

    Q_PROPERTY(QString FileAttributeStandardIsVirtual READ fileAttributeStandardIsVirtual NOTIFY FileAttributeStandardIsVirtualChanged)
    inline QString fileAttributeStandardIsVirtual() const
    { return qvariant_cast< QString >(property("FileAttributeStandardIsVirtual")); }

    Q_PROPERTY(QString FileAttributeStandardName READ fileAttributeStandardName NOTIFY FileAttributeStandardNameChanged)
    inline QString fileAttributeStandardName() const
    { return qvariant_cast< QString >(property("FileAttributeStandardName")); }

    Q_PROPERTY(QString FileAttributeStandardSize READ fileAttributeStandardSize NOTIFY FileAttributeStandardSizeChanged)
    inline QString fileAttributeStandardSize() const
    { return qvariant_cast< QString >(property("FileAttributeStandardSize")); }

    Q_PROPERTY(QString FileAttributeStandardSortOrder READ fileAttributeStandardSortOrder NOTIFY FileAttributeStandardSortOrderChanged)
    inline QString fileAttributeStandardSortOrder() const
    { return qvariant_cast< QString >(property("FileAttributeStandardSortOrder")); }

    Q_PROPERTY(QString FileAttributeStandardSymlinkTarget READ fileAttributeStandardSymlinkTarget NOTIFY FileAttributeStandardSymlinkTargetChanged)
    inline QString fileAttributeStandardSymlinkTarget() const
    { return qvariant_cast< QString >(property("FileAttributeStandardSymlinkTarget")); }

    Q_PROPERTY(QString FileAttributeStandardTargetUri READ fileAttributeStandardTargetUri NOTIFY FileAttributeStandardTargetUriChanged)
    inline QString fileAttributeStandardTargetUri() const
    { return qvariant_cast< QString >(property("FileAttributeStandardTargetUri")); }

    Q_PROPERTY(QString FileAttributeStandardType READ fileAttributeStandardType NOTIFY FileAttributeStandardTypeChanged)
    inline QString fileAttributeStandardType() const
    { return qvariant_cast< QString >(property("FileAttributeStandardType")); }

    Q_PROPERTY(QString FileAttributeThumbnailIsValid READ fileAttributeThumbnailIsValid NOTIFY FileAttributeThumbnailIsValidChanged)
    inline QString fileAttributeThumbnailIsValid() const
    { return qvariant_cast< QString >(property("FileAttributeThumbnailIsValid")); }

    Q_PROPERTY(QString FileAttributeThumbnailPath READ fileAttributeThumbnailPath NOTIFY FileAttributeThumbnailPathChanged)
    inline QString fileAttributeThumbnailPath() const
    { return qvariant_cast< QString >(property("FileAttributeThumbnailPath")); }

    Q_PROPERTY(QString FileAttributeThumbnailingFailed READ fileAttributeThumbnailingFailed NOTIFY FileAttributeThumbnailingFailedChanged)
    inline QString fileAttributeThumbnailingFailed() const
    { return qvariant_cast< QString >(property("FileAttributeThumbnailingFailed")); }

    Q_PROPERTY(QString FileAttributeTimeAccess READ fileAttributeTimeAccess NOTIFY FileAttributeTimeAccessChanged)
    inline QString fileAttributeTimeAccess() const
    { return qvariant_cast< QString >(property("FileAttributeTimeAccess")); }

    Q_PROPERTY(QString FileAttributeTimeAccessUsec READ fileAttributeTimeAccessUsec NOTIFY FileAttributeTimeAccessUsecChanged)
    inline QString fileAttributeTimeAccessUsec() const
    { return qvariant_cast< QString >(property("FileAttributeTimeAccessUsec")); }

    Q_PROPERTY(QString FileAttributeTimeChanged READ fileAttributeTimeChanged NOTIFY FileAttributeTimeChangedChanged)
    inline QString fileAttributeTimeChanged() const
    { return qvariant_cast< QString >(property("FileAttributeTimeChanged")); }

    Q_PROPERTY(QString FileAttributeTimeChangedUsec READ fileAttributeTimeChangedUsec NOTIFY FileAttributeTimeChangedUsecChanged)
    inline QString fileAttributeTimeChangedUsec() const
    { return qvariant_cast< QString >(property("FileAttributeTimeChangedUsec")); }

    Q_PROPERTY(QString FileAttributeTimeCreated READ fileAttributeTimeCreated NOTIFY FileAttributeTimeCreatedChanged)
    inline QString fileAttributeTimeCreated() const
    { return qvariant_cast< QString >(property("FileAttributeTimeCreated")); }

    Q_PROPERTY(QString FileAttributeTimeCreatedUsec READ fileAttributeTimeCreatedUsec NOTIFY FileAttributeTimeCreatedUsecChanged)
    inline QString fileAttributeTimeCreatedUsec() const
    { return qvariant_cast< QString >(property("FileAttributeTimeCreatedUsec")); }

    Q_PROPERTY(QString FileAttributeTimeModified READ fileAttributeTimeModified NOTIFY FileAttributeTimeModifiedChanged)
    inline QString fileAttributeTimeModified() const
    { return qvariant_cast< QString >(property("FileAttributeTimeModified")); }

    Q_PROPERTY(QString FileAttributeTimeModifiedUsec READ fileAttributeTimeModifiedUsec NOTIFY FileAttributeTimeModifiedUsecChanged)
    inline QString fileAttributeTimeModifiedUsec() const
    { return qvariant_cast< QString >(property("FileAttributeTimeModifiedUsec")); }

    Q_PROPERTY(QString FileAttributeTrashDeletionDate READ fileAttributeTrashDeletionDate NOTIFY FileAttributeTrashDeletionDateChanged)
    inline QString fileAttributeTrashDeletionDate() const
    { return qvariant_cast< QString >(property("FileAttributeTrashDeletionDate")); }

    Q_PROPERTY(QString FileAttributeTrashItemCount READ fileAttributeTrashItemCount NOTIFY FileAttributeTrashItemCountChanged)
    inline QString fileAttributeTrashItemCount() const
    { return qvariant_cast< QString >(property("FileAttributeTrashItemCount")); }

    Q_PROPERTY(QString FileAttributeTrashOrigPath READ fileAttributeTrashOrigPath NOTIFY FileAttributeTrashOrigPathChanged)
    inline QString fileAttributeTrashOrigPath() const
    { return qvariant_cast< QString >(property("FileAttributeTrashOrigPath")); }

    Q_PROPERTY(QString FileAttributeUnixBlockSize READ fileAttributeUnixBlockSize NOTIFY FileAttributeUnixBlockSizeChanged)
    inline QString fileAttributeUnixBlockSize() const
    { return qvariant_cast< QString >(property("FileAttributeUnixBlockSize")); }

    Q_PROPERTY(QString FileAttributeUnixBlocks READ fileAttributeUnixBlocks NOTIFY FileAttributeUnixBlocksChanged)
    inline QString fileAttributeUnixBlocks() const
    { return qvariant_cast< QString >(property("FileAttributeUnixBlocks")); }

    Q_PROPERTY(QString FileAttributeUnixDevice READ fileAttributeUnixDevice NOTIFY FileAttributeUnixDeviceChanged)
    inline QString fileAttributeUnixDevice() const
    { return qvariant_cast< QString >(property("FileAttributeUnixDevice")); }

    Q_PROPERTY(QString FileAttributeUnixGid READ fileAttributeUnixGid NOTIFY FileAttributeUnixGidChanged)
    inline QString fileAttributeUnixGid() const
    { return qvariant_cast< QString >(property("FileAttributeUnixGid")); }

    Q_PROPERTY(QString FileAttributeUnixInode READ fileAttributeUnixInode NOTIFY FileAttributeUnixInodeChanged)
    inline QString fileAttributeUnixInode() const
    { return qvariant_cast< QString >(property("FileAttributeUnixInode")); }

    Q_PROPERTY(QString FileAttributeUnixIsMountpoint READ fileAttributeUnixIsMountpoint NOTIFY FileAttributeUnixIsMountpointChanged)
    inline QString fileAttributeUnixIsMountpoint() const
    { return qvariant_cast< QString >(property("FileAttributeUnixIsMountpoint")); }

    Q_PROPERTY(QString FileAttributeUnixMode READ fileAttributeUnixMode NOTIFY FileAttributeUnixModeChanged)
    inline QString fileAttributeUnixMode() const
    { return qvariant_cast< QString >(property("FileAttributeUnixMode")); }

    Q_PROPERTY(QString FileAttributeUnixNlink READ fileAttributeUnixNlink NOTIFY FileAttributeUnixNlinkChanged)
    inline QString fileAttributeUnixNlink() const
    { return qvariant_cast< QString >(property("FileAttributeUnixNlink")); }

    Q_PROPERTY(QString FileAttributeUnixRdev READ fileAttributeUnixRdev NOTIFY FileAttributeUnixRdevChanged)
    inline QString fileAttributeUnixRdev() const
    { return qvariant_cast< QString >(property("FileAttributeUnixRdev")); }

    Q_PROPERTY(QString FileAttributeUnixUid READ fileAttributeUnixUid NOTIFY FileAttributeUnixUidChanged)
    inline QString fileAttributeUnixUid() const
    { return qvariant_cast< QString >(property("FileAttributeUnixUid")); }

    Q_PROPERTY(uint FileTypeDirectory READ fileTypeDirectory NOTIFY FileTypeDirectoryChanged)
    inline uint fileTypeDirectory() const
    { return qvariant_cast< uint >(property("FileTypeDirectory")); }

    Q_PROPERTY(uint FileTypeMountable READ fileTypeMountable NOTIFY FileTypeMountableChanged)
    inline uint fileTypeMountable() const
    { return qvariant_cast< uint >(property("FileTypeMountable")); }

    Q_PROPERTY(uint FileTypeRegular READ fileTypeRegular NOTIFY FileTypeRegularChanged)
    inline uint fileTypeRegular() const
    { return qvariant_cast< uint >(property("FileTypeRegular")); }

    Q_PROPERTY(uint FileTypeShortcut READ fileTypeShortcut NOTIFY FileTypeShortcutChanged)
    inline uint fileTypeShortcut() const
    { return qvariant_cast< uint >(property("FileTypeShortcut")); }

    Q_PROPERTY(uint FileTypeSpecial READ fileTypeSpecial NOTIFY FileTypeSpecialChanged)
    inline uint fileTypeSpecial() const
    { return qvariant_cast< uint >(property("FileTypeSpecial")); }

    Q_PROPERTY(uint FileTypeSymbolicLink READ fileTypeSymbolicLink NOTIFY FileTypeSymbolicLinkChanged)
    inline uint fileTypeSymbolicLink() const
    { return qvariant_cast< uint >(property("FileTypeSymbolicLink")); }

    Q_PROPERTY(uint FileTypeUnknown READ fileTypeUnknown NOTIFY FileTypeUnknownChanged)
    inline uint fileTypeUnknown() const
    { return qvariant_cast< uint >(property("FileTypeUnknown")); }

    Q_PROPERTY(uint FilesystemPreviewTypeIfAlways READ filesystemPreviewTypeIfAlways NOTIFY FilesystemPreviewTypeIfAlwaysChanged)
    inline uint filesystemPreviewTypeIfAlways() const
    { return qvariant_cast< uint >(property("FilesystemPreviewTypeIfAlways")); }

    Q_PROPERTY(uint FilesystemPreviewTypeIfLocal READ filesystemPreviewTypeIfLocal NOTIFY FilesystemPreviewTypeIfLocalChanged)
    inline uint filesystemPreviewTypeIfLocal() const
    { return qvariant_cast< uint >(property("FilesystemPreviewTypeIfLocal")); }

    Q_PROPERTY(uint FilesystemPreviewTypeNever READ filesystemPreviewTypeNever NOTIFY FilesystemPreviewTypeNeverChanged)
    inline uint filesystemPreviewTypeNever() const
    { return qvariant_cast< uint >(property("FilesystemPreviewTypeNever")); }

    Q_PROPERTY(uint QueryFlagNofollowSymlinks READ queryFlagNofollowSymlinks NOTIFY QueryFlagNofollowSymlinksChanged)
    inline uint queryFlagNofollowSymlinks() const
    { return qvariant_cast< uint >(property("QueryFlagNofollowSymlinks")); }

    Q_PROPERTY(uint QueryFlagNone READ queryFlagNone NOTIFY QueryFlagNoneChanged)
    inline uint queryFlagNone() const
    { return qvariant_cast< uint >(property("QueryFlagNone")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> GetThemeIcon(const QString &in0, int in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("GetThemeIcon"), argumentList);
    }

    inline QDBusPendingReply<QString> GetThumbnail(const QString &in0, int in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("GetThumbnail"), argumentList);
    }

    inline QDBusPendingReply<bool> IsNativeFile(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("IsNativeFile"), argumentList);
    }

    inline QDBusPendingReply<QString> QueryInfo(const QString &in0, const QString &in1, uint in2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2);
        return asyncCallWithArgumentList(QStringLiteral("QueryInfo"), argumentList);
    }

Q_SIGNALS: // SIGNALS
// begin property changed signals
void DriveStartStopTypeMultidiskChanged();
void DriveStartStopTypeNetworkChanged();
void DriveStartStopTypePasswordChanged();
void DriveStartStopTypeShutdownChanged();
void DriveStartStopTypeUnknownChanged();
void FileAttributeAccessCanDeleteChanged();
void FileAttributeAccessCanExecuteChanged();
void FileAttributeAccessCanReadChanged();
void FileAttributeAccessCanRenameChanged();
void FileAttributeAccessCanTrashChanged();
void FileAttributeAccessCanWriteChanged();
void FileAttributeDosIsArchiveChanged();
void FileAttributeDosIsSystemChanged();
void FileAttributeEtagValueChanged();
void FileAttributeFilesystemFreeChanged();
void FileAttributeFilesystemReadonlyChanged();
void FileAttributeFilesystemSizeChanged();
void FileAttributeFilesystemTypeChanged();
void FileAttributeFilesystemUsePreviewChanged();
void FileAttributeFilesystemUsedChanged();
void FileAttributeGvfsBackendChanged();
void FileAttributeIdFileChanged();
void FileAttributeIdFilesystemChanged();
void FileAttributeMountableCanEjectChanged();
void FileAttributeMountableCanMountChanged();
void FileAttributeMountableCanPollChanged();
void FileAttributeMountableCanStartChanged();
void FileAttributeMountableCanStartDegradedChanged();
void FileAttributeMountableCanStopChanged();
void FileAttributeMountableCanUnmountChanged();
void FileAttributeMountableHalUdiChanged();
void FileAttributeMountableIsMediaCheckAutomaticChanged();
void FileAttributeMountableStartStopTypeChanged();
void FileAttributeMountableUnixDeviceChanged();
void FileAttributeMountableUnixDeviceFileChanged();
void FileAttributeOwnerGroupChanged();
void FileAttributeOwnerUserChanged();
void FileAttributeOwnerUserRealChanged();
void FileAttributeSelinuxContextChanged();
void FileAttributeStandardAllocatedSizeChanged();
void FileAttributeStandardContentTypeChanged();
void FileAttributeStandardCopyNameChanged();
void FileAttributeStandardDescriptionChanged();
void FileAttributeStandardDisplayNameChanged();
void FileAttributeStandardEditNameChanged();
void FileAttributeStandardFastContentTypeChanged();
void FileAttributeStandardIsBackupChanged();
void FileAttributeStandardIsHiddenChanged();
void FileAttributeStandardIsSymlinkChanged();
void FileAttributeStandardIsVirtualChanged();
void FileAttributeStandardNameChanged();
void FileAttributeStandardSizeChanged();
void FileAttributeStandardSortOrderChanged();
void FileAttributeStandardSymlinkTargetChanged();
void FileAttributeStandardTargetUriChanged();
void FileAttributeStandardTypeChanged();
void FileAttributeThumbnailIsValidChanged();
void FileAttributeThumbnailPathChanged();
void FileAttributeThumbnailingFailedChanged();
void FileAttributeTimeAccessChanged();
void FileAttributeTimeAccessUsecChanged();
void FileAttributeTimeChangedChanged();
void FileAttributeTimeChangedUsecChanged();
void FileAttributeTimeCreatedChanged();
void FileAttributeTimeCreatedUsecChanged();
void FileAttributeTimeModifiedChanged();
void FileAttributeTimeModifiedUsecChanged();
void FileAttributeTrashDeletionDateChanged();
void FileAttributeTrashItemCountChanged();
void FileAttributeTrashOrigPathChanged();
void FileAttributeUnixBlockSizeChanged();
void FileAttributeUnixBlocksChanged();
void FileAttributeUnixDeviceChanged();
void FileAttributeUnixGidChanged();
void FileAttributeUnixInodeChanged();
void FileAttributeUnixIsMountpointChanged();
void FileAttributeUnixModeChanged();
void FileAttributeUnixNlinkChanged();
void FileAttributeUnixRdevChanged();
void FileAttributeUnixUidChanged();
void FileTypeDirectoryChanged();
void FileTypeMountableChanged();
void FileTypeRegularChanged();
void FileTypeShortcutChanged();
void FileTypeSpecialChanged();
void FileTypeSymbolicLinkChanged();
void FileTypeUnknownChanged();
void FilesystemPreviewTypeIfAlwaysChanged();
void FilesystemPreviewTypeIfLocalChanged();
void FilesystemPreviewTypeNeverChanged();
void QueryFlagNofollowSymlinksChanged();
void QueryFlagNoneChanged();
};

namespace com {
  namespace deepin {
    namespace filemanager {
      namespace Backend {
        typedef ::DBusFileInfo FileInfo;
      }
    }
  }
}
#endif
