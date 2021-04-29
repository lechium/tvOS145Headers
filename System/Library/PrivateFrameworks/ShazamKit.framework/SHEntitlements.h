/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ShazamKit/ShazamKit-Structs.h>
@interface SHEntitlements : NSObject {

	BOOL _isEntitledForSignatureGeneration;
	BOOL _isEntitledForStorefront;
	BOOL _isEntitledForMicrophone;
	BOOL _isEntitledForRemoteRecognition;
	BOOL _isEntitledForExternalAudioRecording;
	BOOL _isEntitledForInternalAudioRecording;
	BOOL _isEntitledForLibrarySync;

}

@property (assign,nonatomic) BOOL isEntitledForSignatureGeneration;                   //@synthesize isEntitledForSignatureGeneration=_isEntitledForSignatureGeneration - In the implementation block
@property (assign,nonatomic) BOOL isEntitledForStorefront;                            //@synthesize isEntitledForStorefront=_isEntitledForStorefront - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForMicrophone;                          //@synthesize isEntitledForMicrophone=_isEntitledForMicrophone - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForRemoteRecognition;                   //@synthesize isEntitledForRemoteRecognition=_isEntitledForRemoteRecognition - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForExternalAudioRecording;              //@synthesize isEntitledForExternalAudioRecording=_isEntitledForExternalAudioRecording - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForInternalAudioRecording;              //@synthesize isEntitledForInternalAudioRecording=_isEntitledForInternalAudioRecording - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForLibrarySync;                         //@synthesize isEntitledForLibrarySync=_isEntitledForLibrarySync - In the implementation block
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(void)configureEntitlementsForTask:(SecTaskRef)arg1 ;
-(void)configureEntitlementsForConnection:(id)arg1 ;
-(BOOL)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromSecTask:(SecTaskRef)arg3 ;
-(BOOL)boolValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromConnection:(id)arg3 ;
-(BOOL)boolValueOfEntitlement:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)isEntitledForStorefront;
-(BOOL)isEntitledForSignatureGeneration;
-(BOOL)isEntitledForMicrophone;
-(BOOL)isEntitledForRemoteRecognition;
-(BOOL)isEntitledForExternalAudioRecording;
-(BOOL)isEntitledForInternalAudioRecording;
-(BOOL)isEntitledForLibrarySync;
-(void*)copyValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)hasRequiredEntitlements:(id)arg1 ;
-(void)setIsEntitledForSignatureGeneration:(BOOL)arg1 ;
-(void)setIsEntitledForStorefront:(BOOL)arg1 ;
@end

