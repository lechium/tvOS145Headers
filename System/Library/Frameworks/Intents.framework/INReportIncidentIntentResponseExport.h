/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CLPlacemark, NSArray;


@protocol INReportIncidentIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (assign,nonatomic) unsigned long long transportTypes; 
@property (nonatomic,copy) CLPlacemark * location; 
@property (nonatomic,copy) NSArray * supportedTypes; 
@required
-(long long)code;
-(NSArray *)supportedTypes;
-(CLPlacemark *)location;
-(void)setLocation:(id)arg1;
-(unsigned long long)transportTypes;
-(void)setTransportTypes:(unsigned long long)arg1;
-(void)setSupportedTypes:(id)arg1;

@end

