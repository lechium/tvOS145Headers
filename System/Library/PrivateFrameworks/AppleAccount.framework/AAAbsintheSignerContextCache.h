/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, AAAbsintheContext;

@interface AAAbsintheSignerContextCache : NSObject {

	NSDate* _creationDate;
	AAAbsintheContext* _context;

}

@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) AAAbsintheContext * context;              //@synthesize context=_context - In the implementation block
+(id)cacheWithContext:(id)arg1 ;
-(id)init;
-(NSDate *)creationDate;
-(AAAbsintheContext *)context;
-(id)initWithContext:(id)arg1 ;
@end

