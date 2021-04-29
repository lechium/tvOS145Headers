/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRAVBufferedInputStream.h>
#import <libobjc.A.dylib/AVOutputDeviceCommunicationChannelDelegate.h>

@class AVOutputDevice, NSString;

@interface MRAVOutputDeviceInputStream : MRAVBufferedInputStream <AVOutputDeviceCommunicationChannelDelegate> {

	AVOutputDevice* _outputDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithOutputDevice:(id)arg1 ;
-(void)outputDevice:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)outputDevice:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
@end

