/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriOntology/SiriOntology-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface USOGraph : NSObject <NSSecureCoding> {

	unique_ptr<siri::ontology::UsoGraph, std::__1::default_delete<siri::ontology::UsoGraph>>* _usoGraph;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)createEntityNode:(const OntologyNodeName*)arg1 ;
-(id)createStringNode:(id)arg1 ;
-(id)getRoot;
-(UsoGraph*)getCppGraph;
-(UsoRootNode*)getCppRootNode;
-(id)initWithCppUsoGraph:(unique_ptr<siri::ontology::UsoGraph, std::__1::default_delete<siri::ontology::UsoGraph>>*)arg1 ;
-(id)createOperatorNode:(const OntologyNodeName*)arg1 ;
-(id)createTaskNode:(const OntologyNodeName*)arg1 verb:(const OntologyVerbName*)arg2 ;
-(id)createIntNode:(id)arg1 ;
@end

