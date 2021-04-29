/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVOutputDeviceImpl, AVOutputDeviceCommunicationChannelDelegate, AVOutputDeviceCommunicationChannelManager;
@class NSString, NSData;

@interface AVOutputDeviceInternal : NSObject {

	id<AVOutputDeviceImpl> impl;
	NSString* name;
	NSString* ID;
	long long deviceType;
	long long deviceSubType;
	NSString* manufacturer;
	NSString* modelID;
	NSString* serialNumber;
	NSString* firmwareVersion;
	NSData* MACAddress;
	unsigned long long deviceFeatures;
	id<AVOutputDeviceCommunicationChannelDelegate> communicationChannelDelegate;
	id<AVOutputDeviceCommunicationChannelManager> commChannelManager;

}
@end

