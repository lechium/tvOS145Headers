/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, ML3DatabaseConnection;

@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator {

	NSEnumerator* _dirtyInsertsEnumerator;
	ML3DatabaseConnection* _connection;
	unsigned long long _offset;

}
-(id)nextObject;
-(id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2 ;
@end

