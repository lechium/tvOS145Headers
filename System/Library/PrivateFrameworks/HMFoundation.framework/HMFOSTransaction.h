/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_os_transaction;
@class NSObject;

@interface HMFOSTransaction : HMFObject {

	NSObject*<OS_os_transaction> _transaction;
	double _creationTime;

}

@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) double creationTime;                                   //@synthesize creationTime=_creationTime - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(double)creationTime;
-(NSObject*<OS_os_transaction>)transaction;
@end

