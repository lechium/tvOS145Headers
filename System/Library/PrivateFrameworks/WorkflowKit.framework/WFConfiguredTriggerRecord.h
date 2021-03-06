/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRecord.h>

@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord {

	BOOL _shouldPrompt;
	BOOL _enabled;
	int _source;
	NSData* _triggerData;
	NSData* _suggestionData;

}

@property (nonatomic,copy) NSData * triggerData;                         //@synthesize triggerData=_triggerData - In the implementation block
@property (assign,nonatomic) BOOL shouldPrompt;                          //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSData * suggestionData;                      //@synthesize suggestionData=_suggestionData - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(int)source;
-(void)setSource:(int)arg1 ;
-(BOOL)isEnabled;
-(NSData *)suggestionData;
-(BOOL)shouldPrompt;
-(NSData *)triggerData;
-(void)setTriggerData:(NSData *)arg1 ;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(void)setSuggestionData:(NSData *)arg1 ;
@end

