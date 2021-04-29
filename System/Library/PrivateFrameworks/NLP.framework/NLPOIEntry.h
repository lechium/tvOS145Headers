/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NLP/NLParsecNamedEntity.h>

@class NSString, NLPOIEntryImpl;

@interface NLPOIEntry : NSObject <NLParsecNamedEntity> {

	NLPOIEntryImpl* m_impl;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned char category; 
@property (nonatomic,readonly) float score; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)dealloc;
-(unsigned char)category;
-(float)score;
-(id)initWithProtoBuf:(id)arg1 ;
@end

