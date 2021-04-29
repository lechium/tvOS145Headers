/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidateObservable.h>

@class NSURL, NSString;

@interface PKDirectoryCoordinator : NSObject <PKInvalidateObservable> {

	os_unfair_lock_s _lock;
	AB _invalidated;
	NSURL* _url;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)performCoordinatedAction:(/*^block*/id)arg1 ;
@end

