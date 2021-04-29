/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MAFloatVector;

@interface PGLabeledFloatVector : NSObject {

	MAFloatVector* _floatVector;
	MAFloatVector* _label;

}

@property (nonatomic,readonly) MAFloatVector * floatVector;              //@synthesize floatVector=_floatVector - In the implementation block
@property (nonatomic,readonly) MAFloatVector * label;                    //@synthesize label=_label - In the implementation block
-(MAFloatVector *)label;
-(MAFloatVector *)floatVector;
-(id)initWithFloatVector:(id)arg1 label:(id)arg2 ;
@end
