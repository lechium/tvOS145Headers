/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakObjectValue : NSValue {

	void* _value;
	id _object;
	BOOL _useFallback;

}
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(const char*)objCType;
-(id)initWithObject:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(id)weakObjectValue;
-(id)nonretainedObjectValue;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)isEqualToValue:(id)arg1 ;
@end

