/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/SFSpeechSynthesisTask.h>

@class SFSSOspreyTTSClient;

@interface SFSSServerTTSTask : SFSpeechSynthesisTask {

	SFSSOspreyTTSClient* _ospreyTTSClient;

}

@property (assign,nonatomic,__weak) SFSSOspreyTTSClient * ospreyTTSClient;              //@synthesize ospreyTTSClient=_ospreyTTSClient - In the implementation block
+(id)createOspreyRequestFromReqeust:(id)arg1 ;
+(AudioStreamBasicDescription)audioStreamBasicDescription:(id)arg1 ;
+(id)generateVoiceAssetFromVoiceMetaInfo:(id)arg1 ;
+(id)generateResourceAssetFromResourceMetaInfo:(id)arg1 ;
+(long long)convertVoiceTypeToServerType:(long long)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cancelTask;
-(void)startTask:(/*^block*/id)arg1 ;
-(SFSSOspreyTTSClient *)ospreyTTSClient;
-(void)setOspreyTTSClient:(SFSSOspreyTTSClient *)arg1 ;
@end

