/*
 Copyright (c) 2008 LightSPEED Technologies, Inc.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import <Cocoa/Cocoa.h>

#import "USParser.h"

@class USSchema;
@class USWSDL;
@class USType;

@interface USParser (Types)

#pragma mark Types
- (void)processTypesElement:(NSXMLElement *)el wsdl:(USWSDL *)wsdl;
- (void)processTypesChildElement:(NSXMLElement *)el wsdl:(USWSDL *)wsdl;

#pragma mark Types:Schema:SimpleType
- (void)processSimpleTypeElement:(NSXMLElement *)el schema:(USSchema *)schema;
- (void)processSimpleTypeChildElement:(NSXMLElement *)el type:(USType *)type;
- (void)processRestrictionElement:(NSXMLElement *)el type:(USType *)type;
- (void)processRestrictionChildElement:(NSXMLElement *)el type:(USType *)type;
- (void)processEnumerationElement:(NSXMLElement *)el type:(USType *)type;

#pragma mark Types:Schema:ComplexType
- (void)processComplexTypeElement:(NSXMLElement *)el schema:(USSchema *)schema;
- (void)processComplexTypeChildElement:(NSXMLElement *)el type:(USType *)type;
- (void)processAttributeElement:(NSXMLElement *)el type:(USType *)type;
- (void)processSequenceElement:(NSXMLElement *)el type:(USType *)type;
- (void)processSequenceChildElement:(NSXMLElement *)el type:(USType *)type;
- (void)processSequenceElementElement:(NSXMLElement *)el type:(USType *)type;
- (void)processComplexContentElement:(NSXMLElement *)el type:(USType *)type;
- (void)processComplexContentChildElement:(NSXMLElement *)el type:(USType *)type;
- (void)processExtensionElement:(NSXMLElement *)el type:(USType *)type;
- (void)processExtensionChildElement:(NSXMLElement *)el type:(USType *)type;

#pragma mark Types:Schema:Element
- (void)processElementElement:(NSXMLElement *)el schema:(USSchema *)schema;

@end
