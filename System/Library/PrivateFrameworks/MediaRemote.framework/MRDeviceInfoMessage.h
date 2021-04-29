/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, MRDeviceInfo;

@interface MRDeviceInfoMessage : MRProtocolMessage {

	MRSupportedProtocolMessages* _supportedProtocolMessages;

}

@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
@property (nonatomic,readonly) MRSupportedProtocolMessages * supportedProtocolMessages; 
-(unsigned long long)type;
-(unsigned long long)encryptionType;
-(MRDeviceInfo *)deviceInfo;
-(id)initWithDeviceInfo:(id)arg1 ;
-(MRSupportedProtocolMessages *)supportedProtocolMessages;
@end
