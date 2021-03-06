/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HMDCameraUserSettingsConfiguration : HMFObject {

	BOOL _sharingFaceClassificationsEnabled;
	BOOL _importingFromPhotoLibraryEnabled;
	BOOL _owner;

}

@property (getter=isSharingFaceClassificationsEnabled,readonly) BOOL sharingFaceClassificationsEnabled;              //@synthesize sharingFaceClassificationsEnabled=_sharingFaceClassificationsEnabled - In the implementation block
@property (getter=isImportingFromPhotoLibraryEnabled,readonly) BOOL importingFromPhotoLibraryEnabled;                //@synthesize importingFromPhotoLibraryEnabled=_importingFromPhotoLibraryEnabled - In the implementation block
@property (getter=isOwner,readonly) BOOL owner;                                                                      //@synthesize owner=_owner - In the implementation block
-(id)initWithUser:(id)arg1 ;
-(BOOL)isOwner;
-(BOOL)isImportingFromPhotoLibraryEnabled;
-(BOOL)isSharingFaceClassificationsEnabled;
@end

