/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConstantData : NSData {

	unsigned long long _length;
	const char* _bytes;

}
+(id)new;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(BOOL)_isCompact;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_copyWillRetain;
-(BOOL)_providesConcreteBacking;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
@end

