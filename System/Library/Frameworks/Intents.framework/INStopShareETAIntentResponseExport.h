/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol INStopShareETAIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * recipients; 
@property (assign,nonatomic) unsigned long long mediums; 
@required
-(long long)code;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(unsigned long long)mediums;
-(void)setMediums:(unsigned long long)arg1;

@end

