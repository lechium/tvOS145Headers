/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SAAceCommand;
@class AceObject;

@interface AFInterstitialCommandWrapper : NSObject {

	/*^block*/id _completion;
	AceObject*<SAAceCommand> _command;
	AceObject*<SAAceCommand> _defaultReply;

}

@property (nonatomic,readonly) AceObject*<SAAceCommand> command;                   //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) AceObject*<SAAceCommand> defaultReply;              //@synthesize defaultReply=_defaultReply - In the implementation block
-(void)dealloc;
-(AceObject*<SAAceCommand>)command;
-(void)dispatchCompletionWithReply:(id)arg1 error:(id)arg2 ;
-(id)initWithCommand:(id)arg1 defaultReply:(id)arg2 completion:(/*^block*/id)arg3 ;
-(AceObject*<SAAceCommand>)defaultReply;
@end

