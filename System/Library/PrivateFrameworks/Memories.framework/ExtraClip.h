/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/KonaClip.h>

@class NSMutableDictionary, NSString;

@interface ExtraClip : KonaClip

@property (nonatomic,retain,readonly) NSMutableDictionary * extraDefinition; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double startRatio; 
@property (assign,nonatomic) double endRatio; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)maxDuration;
-(int)clipType;
-(BOOL)hasVisualCharacteristic;
-(NSMutableDictionary *)extraDefinition;
-(double)startRatio;
-(void)setStartRatio:(double)arg1 ;
-(double)endRatio;
-(void)setEndRatio:(double)arg1 ;
@end

