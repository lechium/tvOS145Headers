/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class PLPhotoLibrary, CPLStatus, NSString;

@interface PXCMMEnabledStatusProvider : PXObservable <CPLStatusDelegate, PXSettingsKeyObserver> {

	BOOL _isFeatureEnabled;
	BOOL _isCPLEnabled;
	BOOL _hasExitDate;
	PLPhotoLibrary* _pl_photoLibrary;
	CPLStatus* _cplStatus;
	BOOL _enabled;

}

@property (getter=isEnabled,readonly) BOOL enabled;                 //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentStatusProvider;
-(id)init;
-(BOOL)isEnabled;
-(void)statusDidChange:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)_isFeatureEnabled;
-(BOOL)_isCPLEnabled;
-(BOOL)_hasExitDate;
-(BOOL)_isCMMEnabled;
-(void)_updateIsCMMEnabled;
-(void)_updateIsFeatureEnabled;
-(void)_updateIsCPLEnabled;
-(void)_updateHasExitDate;
@end

