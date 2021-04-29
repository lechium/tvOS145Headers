/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMSharedMessageSendingUtilities : NSObject {

	long long _serviceAvailability;

}

@property (assign) long long serviceAvailability;              //@synthesize serviceAvailability=_serviceAvailability - In the implementation block
+(void)initialize;
+(id)sharedInstance;
+(void)_setupAccountMonitor;
-(long long)serviceAvailability;
-(BOOL)isiMessageEnabled;
-(BOOL)_hasSMSCapability;
-(BOOL)_canSendText;
-(void)setServiceAvailability:(long long)arg1 ;
-(id)_managedConfigAppWhitelist;
-(void)_updateServiceAvailability;
-(BOOL)isMMSEnabled;
-(BOOL)_isiMessageSupported;
-(long long)_maxMMSAttachmentCount;
-(long long)_maxMMSMessageByteCount;
-(BOOL)canSendText;
-(BOOL)isSupportedAttachmentUTI:(id)arg1 ;
-(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
@end

