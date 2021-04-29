/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	unsigned long long _revision;
	NSString* _language;
	NSDictionary* _options;

}

@property (readonly) long long type; 
@property (copy,readonly) NSString * language; 
@property (readonly) unsigned long long revision; 
+(BOOL)supportsSecureCoding;
+(id)defaultModelConfigurationForType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)defaultModelConfigurationForType:(long long)arg1 ;
+(unsigned long long)currentRevisionForType:(long long)arg1 ;
+(id)supportedRevisionsForType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)options;
-(NSString *)language;
-(unsigned long long)revision;
-(id)embeddingData;
-(id)initWithModelType:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)embeddingURL;
-(id)embeddingModel;
@end

