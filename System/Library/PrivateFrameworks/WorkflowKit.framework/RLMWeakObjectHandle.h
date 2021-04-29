/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying> {

	BasicRow<realm::Table>* _row;
	RLMClassInfo* _info;
	Class _objectClass;

}

@property (nonatomic,readonly) RLMObjectBase * object; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(RLMObjectBase *)object;
@end
