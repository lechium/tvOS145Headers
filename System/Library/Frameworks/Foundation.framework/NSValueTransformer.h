/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSValueTransformer : NSObject
+(void)setValueTransformer:(id)arg1 forName:(id)arg2 ;
+(BOOL)allowsReverseTransformation;
+(id)valueTransformerForName:(id)arg1 ;
+(id)valueTransformerNames;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)_initForFoundationOnly;
-(id)reverseTransformedValue:(id)arg1 ;
@end

