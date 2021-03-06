/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBSAssertionObserving.h>

@class NSString;

@interface WKRBSAssertionDelegate : NSObject <RBSAssertionObserving> {

	/*^block*/id _invalidationCallback;

}

@property (copy) id invalidationCallback;                           //@synthesize invalidationCallback=_invalidationCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)assertionWillInvalidate:(id)arg1 ;
-(id)invalidationCallback;
-(void)setInvalidationCallback:(id)arg1 ;
@end

