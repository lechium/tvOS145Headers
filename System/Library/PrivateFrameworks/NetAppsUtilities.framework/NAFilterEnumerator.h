/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface NAFilterEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _filter;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,copy,readonly) id filter;                         //@synthesize filter=_filter - In the implementation block
-(id)allObjects;
-(id)nextObject;
-(NSEnumerator *)enumerator;
-(id)filter;
-(id)initWithEnumerator:(id)arg1 filter:(/*^block*/id)arg2 ;
@end

