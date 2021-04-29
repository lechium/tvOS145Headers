/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAudioSessionCoordinationSnapshotMutating.h>

@class AFAudioSessionCoordinationSnapshot, NSDateInterval, NSArray, AFAudioSessionCoordinationDeviceInfo, NSString;

@interface _AFAudioSessionCoordinationSnapshotMutation : NSObject <AFAudioSessionCoordinationSnapshotMutating> {

	AFAudioSessionCoordinationSnapshot* _baseModel;
	NSDateInterval* _currentOrUpNextDateInterval;
	BOOL _isAudioSessionActive;
	NSArray* _localActiveAssertionContexts;
	NSArray* _localPendingAssertionContexts;
	NSArray* _remoteActiveAssertionContexts;
	NSArray* _remotePendingAssertionContexts;
	AFAudioSessionCoordinationDeviceInfo* _localDevice;
	NSArray* _remoteQualifiedInRangeDevices;
	NSArray* _remoteQualifiedOutOfRangeDevices;
	NSArray* _remoteDisqualifiedDevices;
	struct {
		unsigned isDirty : 1;
		unsigned hasCurrentOrUpNextDateInterval : 1;
		unsigned hasIsAudioSessionActive : 1;
		unsigned hasLocalActiveAssertionContexts : 1;
		unsigned hasLocalPendingAssertionContexts : 1;
		unsigned hasRemoteActiveAssertionContexts : 1;
		unsigned hasRemotePendingAssertionContexts : 1;
		unsigned hasLocalDevice : 1;
		unsigned hasRemoteQualifiedInRangeDevices : 1;
		unsigned hasRemoteQualifiedOutOfRangeDevices : 1;
		unsigned hasRemoteDisqualifiedDevices : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setLocalDevice:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setCurrentOrUpNextDateInterval:(id)arg1 ;
-(void)setIsAudioSessionActive:(BOOL)arg1 ;
-(void)setLocalActiveAssertionContexts:(id)arg1 ;
-(void)setLocalPendingAssertionContexts:(id)arg1 ;
-(void)setRemoteActiveAssertionContexts:(id)arg1 ;
-(void)setRemotePendingAssertionContexts:(id)arg1 ;
-(void)setRemoteQualifiedInRangeDevices:(id)arg1 ;
-(void)setRemoteQualifiedOutOfRangeDevices:(id)arg1 ;
-(void)setRemoteDisqualifiedDevices:(id)arg1 ;
@end
