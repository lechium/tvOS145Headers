/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)setName:(id)arg1 ;
-(void)lockForReading;
-(BOOL)tryLockForReading;
-(BOOL)lockForReadingBeforeDate:(id)arg1 ;
-(void)lockForWriting;
-(BOOL)tryLockForWriting;
-(BOOL)lockForWritingBeforeDate:(id)arg1 ;
@end

