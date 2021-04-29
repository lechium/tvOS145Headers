/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MROutputContextDataSource.h>

@protocol OS_dispatch_queue;
@class MRAVOutputContext, NSMutableDictionary, NSObject, NSString;

@interface MROutputContextController : MROutputContextDataSource {

	MRAVOutputContext* _outputContext;
	float _masterVolume;
	unsigned _masterVolumeControlCapabilities;
	BOOL _localVolumeInitialized;
	BOOL _localVolumeControlCapabilitiesInitialized;
	NSMutableDictionary* _outputDeviceVolume;
	NSObject*<OS_dispatch_queue> _serialQueue;
	float _localVolume;
	unsigned _localVolumeControlCapabilities;

}

@property (assign,nonatomic) float localVolume;                                    //@synthesize localVolume=_localVolume - In the implementation block
@property (assign,nonatomic) unsigned localVolumeControlCapabilities;              //@synthesize localVolumeControlCapabilities=_localVolumeControlCapabilities - In the implementation block
@property (nonatomic,readonly) NSString * localDeviceUID; 
+(id)sharedOutputContextController;
-(id)description;
-(void)dealloc;
-(id)uniqueIdentifier;
-(float)volume;
-(id)outputDevices;
-(NSString *)localDeviceUID;
-(id)setVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(float)volumeForOutputDeviceUID:(id)arg1 ;
-(unsigned)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1 ;
-(unsigned)volumeControlCapabilities;
-(void)setLocalVolume:(float)arg1 ;
-(void)setLocalVolumeControlCapabilities:(unsigned)arg1 ;
-(void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceAddedNotification:(id)arg1 ;
-(void)_handleOutputDeviceRemovedNotification:(id)arg1 ;
-(float)localVolume;
-(unsigned)localVolumeControlCapabilities;
@end

