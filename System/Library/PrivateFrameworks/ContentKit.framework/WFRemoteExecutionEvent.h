/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRemoteExecutionEvent : WFEvent {

	BOOL _completed;
	NSString* _key;
	NSString* _source;
	NSString* _actionIdentifier;
	NSString* _destinationType;
	NSString* _connectionType;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * destinationType;               //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,copy) NSString * connectionType;                //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL completed;                         //@synthesize completed=_completed - In the implementation block
+(Class)codableEventClass;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(NSString *)destinationType;
-(void)setDestinationType:(NSString *)arg1 ;
-(void)setConnectionType:(NSString *)arg1 ;
-(NSString *)connectionType;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)actionIdentifier;
-(void)setActionIdentifier:(NSString *)arg1 ;
@end

