/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoordinationCore/COClientObserver.h>

@class NSSet;

@interface COMeshTimerAddOnClientObserver : COClientObserver {

	NSSet* _constraints;

}

@property (nonatomic,copy,readonly) NSSet * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)constraints;
-(id)initWithConnection:(id)arg1 constraints:(id)arg2 ;
@end

