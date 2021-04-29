/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol TIMarkedTextBuffer
@property (nonatomic,readonly) NSString * internalString; 
@property (nonatomic,readonly) long long internalIndex; 
@property (nonatomic,readonly) NSString * externalString; 
@property (assign,nonatomic) long long externalIndex; 
@required
-(long long)internalIndex;
-(void)setInternalString:(id)arg1 withInputIndex:(long long)arg2;
-(NSString *)internalString;
-(long long)externalIndex;
-(void)deleteFromInput:(long long*)arg1 newInput:(id*)arg2 inputIndex:(long long*)arg3;
-(NSString *)externalString;
-(void)setExternalIndex:(long long)arg1;

@end
