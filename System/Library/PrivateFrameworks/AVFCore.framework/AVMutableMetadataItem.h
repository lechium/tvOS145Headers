/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSString, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem {

	AVMutableMetadataItemInternal* _mutablePriv;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (nonatomic,copy) NSLocale * locale; 
@property (assign,nonatomic) SCD_Struct_AV6 time; 
@property (assign,nonatomic) SCD_Struct_AV6 duration; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) id<NSObject><NSCopying> value; 
@property (nonatomic,copy) NSDictionary * extraAttributes; 
+(id)metadataItem;
+(id)keyPathsForValuesAffectingIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)languageCode;
-(NSString *)identifier;
-(id<NSObject><NSCopying>)value;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)key;
-(void)setKey:(id)arg1 ;
-(id)startDate;
-(SCD_Struct_AV6)duration;
-(SCD_Struct_AV6)time;
-(NSString *)dataType;
-(void)setDataType:(NSString *)arg1 ;
-(void)setDuration:(SCD_Struct_AV6)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(void)setTime:(SCD_Struct_AV6)arg1 ;
-(NSString *)extendedLanguageTag;
-(id)keySpace;
-(NSDictionary *)extraAttributes;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setKeySpace:(id)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
@end

