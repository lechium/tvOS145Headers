/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSURLKeyValuePair : NSObject {

	id key;
	id value;
	unsigned long long hash;

}
+(id)pairWithKey:(id)arg1 value:(id)arg2 ;
+(id)pair;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)key;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(void)setKey:(id)arg1 ;
@end
