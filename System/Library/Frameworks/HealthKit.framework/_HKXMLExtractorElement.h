/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface _HKXMLExtractorElement : NSObject {

	NSString* _specificationElement;
	NSDictionary* _specificationAttributes;

}

@property (copy,readonly) NSString * specificationElement;                     //@synthesize specificationElement=_specificationElement - In the implementation block
@property (copy,readonly) NSDictionary * specificationAttributes;              //@synthesize specificationAttributes=_specificationAttributes - In the implementation block
-(id)initWithElementName:(id)arg1 attributes:(id)arg2 ;
-(NSString *)specificationElement;
-(NSDictionary *)specificationAttributes;
-(id)initWithTagSpecification:(id)arg1 ;
-(BOOL)matchesElement:(id)arg1 ;
@end

