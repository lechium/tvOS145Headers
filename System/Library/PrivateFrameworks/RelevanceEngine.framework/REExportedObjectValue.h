/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REExportedValue.h>

@interface REExportedObjectValue : REExportedValue {

	id _object;
	BOOL _allowsEncoding;

}
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)type;
-(id)objectValue;
-(unsigned long long)propertyCount;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldEncodeProperty:(id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end
