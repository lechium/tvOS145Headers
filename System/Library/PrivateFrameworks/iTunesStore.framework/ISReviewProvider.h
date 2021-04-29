/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISReviewProvider : ISDataProvider <NSCopying> {

	BOOL _backgroundReview;

}

@property (getter=isBackgroundReview) BOOL backgroundReview;              //@synthesize backgroundReview=_backgroundReview - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
@end

