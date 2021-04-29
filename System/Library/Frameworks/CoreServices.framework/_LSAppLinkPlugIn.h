/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreServices/CoreServices-Structs.h>
@class NSURLComponents, _LSAppLinkOpenState;

@interface _LSAppLinkPlugIn : NSObject {

	NSURLComponents* _URLComponents;
	unsigned long long _limit;
	_LSAppLinkOpenState* _state;

}

@property (retain) NSURLComponents * URLComponents;              //@synthesize URLComponents=_URLComponents - In the implementation block
@property (assign) unsigned long long limit;                     //@synthesize limit=_limit - In the implementation block
@property (retain) _LSAppLinkOpenState * state;                  //@synthesize state=_state - In the implementation block
+(id)plugInClasses;
+(BOOL)canHandleURLComponents:(id)arg1 ;
-(_LSAppLinkOpenState *)state;
-(void)setState:(_LSAppLinkOpenState *)arg1 ;
-(NSURLComponents *)URLComponents;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)setURLComponents:(NSURLComponents *)arg1 ;
-(id)appLinksWithContext:(LSContext*)arg1 error:(id*)arg2 ;
@end

