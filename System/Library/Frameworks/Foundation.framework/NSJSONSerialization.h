/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@interface NSJSONSerialization : NSObject {

	void** reserved[6];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)isValidJSONObject:(id)arg1 ;
+(id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(long long)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)JSONObjectWithStream:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)init;
@end

