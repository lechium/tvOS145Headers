/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface GPBOneofDescriptor : NSObject {

	const char* name_;
	NSArray* fields_;
	SEL caseSel_;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * fields; 
-(NSString *)name;
-(void)dealloc;
-(NSArray *)fields;
-(id)initWithName:(const char*)arg1 fields:(id)arg2 ;
-(id)fieldWithNumber:(unsigned)arg1 ;
-(id)fieldWithName:(id)arg1 ;
@end

