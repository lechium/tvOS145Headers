/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSData;

@interface CUINamedRecognitionObject : CUINamedLookup

@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSData * objectData; 
@property (nonatomic,readonly) SCD_Struct_CS10 referenceOriginTransformation; 
-(id)description;
-(long long)version;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(SCD_Struct_CS10)referenceOriginTransformation;
-(NSData *)objectData;
@end

