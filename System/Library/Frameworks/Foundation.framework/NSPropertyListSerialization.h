/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@interface NSPropertyListSerialization : NSObject {

	void** reserved[6];

}
+(id)MCSafePropertyListWithData:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long*)arg3 error:(out id*)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)propertyListWithData:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long*)arg3 error:(out id*)arg4 ;
+(id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(out id*)arg4 ;
+(BOOL)propertyList:(id)arg1 isValidForFormat:(unsigned long long)arg2 ;
+(id)dataFromPropertyList:(id)arg1 format:(unsigned long long)arg2 errorDescription:(out id*)arg3 ;
+(id)propertyListFromData:(id)arg1 mutabilityOption:(unsigned long long)arg2 format:(unsigned long long*)arg3 errorDescription:(out id*)arg4 ;
+(long long)writePropertyList:(id)arg1 toStream:(id)arg2 format:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(out id*)arg5 ;
+(id)propertyListWithStream:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long*)arg3 error:(out id*)arg4 ;
-(id)init;
@end

