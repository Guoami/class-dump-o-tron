//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BRFieldCKInfo, NSData, NSNumber, NSSet, NSString;

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding>
{
    BRFieldCKInfo *_ckInfo;
    long long _mtime;
    NSString *_originalPOSIXName;
    long long _size;
    long long _thumbnailSize;
    NSData *_thumbnailSignature;
    NSData *_contentSignature;
    NSData *_xattrSignature;
    NSData *_quarantineInfo;
    NSSet *_conflictLoserEtags;
    NSData *_lazyXattr;
    NSNumber *_lastEditorDeviceKey;
    NSString *_lastEditorDeviceName;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property(retain, nonatomic) NSString *lastEditorDeviceName; // @synthesize lastEditorDeviceName=_lastEditorDeviceName;
@property(retain, nonatomic) NSNumber *lastEditorDeviceKey; // @synthesize lastEditorDeviceKey=_lastEditorDeviceKey;
@property(retain, nonatomic) NSData *lazyXattr; // @synthesize lazyXattr=_lazyXattr;
@property(retain, nonatomic) NSData *xattrSignature; // @synthesize xattrSignature=_xattrSignature;
@property(retain, nonatomic) NSSet *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) NSData *contentSignature; // @synthesize contentSignature=_contentSignature;
@property(retain, nonatomic) NSData *thumbnailSignature; // @synthesize thumbnailSignature=_thumbnailSignature;
@property(nonatomic) long long thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *originalPOSIXName; // @synthesize originalPOSIXName=_originalPOSIXName;
@property(nonatomic) long long mtime; // @synthesize mtime=_mtime;
@property(retain, nonatomic) BRFieldCKInfo *ckInfo; // @synthesize ckInfo=_ckInfo;
- (void).cxx_destruct;
- (id)additionNameForItemID:(id)arg1 container:(id)arg2;
- (unsigned long long)diffAgainst:(id)arg1;
- (unsigned long long)diffAgainst:(id)arg1 lastEditorChanged:(_Bool *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)check:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) _Bool isPackage;
- (id)initWithVersion:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2 container:(id)arg3;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (id)displayNameWithoutExtension:(_Bool)arg1;
- (id)lastEditorDeviceNameWithDB:(id)arg1;

@end

