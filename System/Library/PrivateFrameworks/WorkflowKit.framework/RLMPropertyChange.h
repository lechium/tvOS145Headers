/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface RLMPropertyChange : NSObject {

	NSString* _name;
	id _previousValue;
	id _value;

}

@property (nonatomic,retain) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,retain) id value;                      //@synthesize value=_value - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)previousValue;
-(void)setPreviousValue:(id)arg1 ;
@end

