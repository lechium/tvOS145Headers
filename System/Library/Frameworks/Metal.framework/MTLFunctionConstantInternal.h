/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLFunctionConstant.h>

@class NSString;

@interface MTLFunctionConstantInternal : MTLFunctionConstant {

	NSString* _name;
	unsigned long long _type;
	unsigned long long _index;
	BOOL _required;

}
-(id)name;
-(id)description;
-(void)dealloc;
-(unsigned long long)type;
-(unsigned long long)index;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)required;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(BOOL)arg4 ;
@end

