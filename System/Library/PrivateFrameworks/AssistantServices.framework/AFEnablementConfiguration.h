/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface AFEnablementConfiguration : NSObject {

	BOOL _voiceSelectionAllowsRandomSelection;
	BOOL _requiresVoiceSelection;
	/*^block*/id _completionLoggingBlock;
	NSDictionary* _voiceCountForRecognitionLanguage;

}

@property (nonatomic,readonly) BOOL requiresVoiceSelection;                                  //@synthesize requiresVoiceSelection=_requiresVoiceSelection - In the implementation block
@property (nonatomic,readonly) NSDictionary * voiceCountForRecognitionLanguage;              //@synthesize voiceCountForRecognitionLanguage=_voiceCountForRecognitionLanguage - In the implementation block
@property (nonatomic,readonly) BOOL voiceSelectionAllowsRandomSelection;                     //@synthesize voiceSelectionAllowsRandomSelection=_voiceSelectionAllowsRandomSelection - In the implementation block
@property (nonatomic,retain,readonly) id completionLoggingBlock;                             //@synthesize completionLoggingBlock=_completionLoggingBlock - In the implementation block
-(id)initWithRequiresVoiceSelection:(BOOL)arg1 voiceSelectionAllowsChooseForMe:(BOOL)arg2 voiceCountForRecognitionLanguage:(id)arg3 completionLoggingBlock:(/*^block*/id)arg4 ;
-(BOOL)requiresVoiceSelectionForRecognitionLanguage:(id)arg1 ;
-(BOOL)voiceSelectionAllowsRandomSelection;
-(id)completionLoggingBlock;
-(BOOL)requiresVoiceSelection;
-(NSDictionary *)voiceCountForRecognitionLanguage;
@end

