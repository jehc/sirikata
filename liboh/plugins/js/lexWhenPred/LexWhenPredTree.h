/** \file
 *  This C header file was generated by $ANTLR version 3.1.3 Mar 17, 2009 19:23:44
 *
 *     -  From the grammar source file : .//LexWhenPredTree.g
 *     -                            On : 2011-02-22 17:07:03
 *     -           for the tree parser : LexWhenPredTreeTreeParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The tree parser LexWhenPredTree has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pLexWhenPredTree, which is returned from a call to LexWhenPredTreeNew().
 *
 * The methods in pLexWhenPredTree are  as follows:
 *
 *  - pANTLR3_STRING      pLexWhenPredTree->program(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->sourceElements(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->sourceElement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->functionDeclaration(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->functionExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->formalParameterList(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->functionBody(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->statement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->statementBlock(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->statementList(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->variableStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->variableDeclarationList(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->variableDeclarationListNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->variableDeclaration(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->variableDeclarationNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->initialiser(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->initialiserNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->expressionStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->ifStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->iterationStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->doWhileStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->whileStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->forStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->forStatementInitialiserPart(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->forInStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->forInStatementInitialiserPart(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->continueStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->breakStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->returnStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->withStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->labelledStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->switchStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->caseBlock(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->caseClause(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->defaultClause(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->throwStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->whenStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->whenPred(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->whenCheckedListFirst(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->whenCheckedListSubsequent(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->tryStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->msgSendStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->msgRecvStatement(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->catchClause(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->finallyClause(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->expression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->expressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->assignmentExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->assignmentExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->leftHandSideExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->newExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->propertyReferenceSuffix1(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->indexSuffix1(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->memberExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->memberExpressionSuffix(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->callExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->callExpressionSuffix(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->arguments(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->indexSuffix(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->propertyReferenceSuffix(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->assignmentOperator(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->conditionalExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->conditionalExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->logicalANDExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->logicalORExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->logicalORExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->logicalANDExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->bitwiseORExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->bitwiseORExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->bitwiseXORExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->bitwiseXORExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->bitwiseANDExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->bitwiseANDExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->equalityExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->equalityExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->relationalOps(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->relationalExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->relationalOpsNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->relationalExpressionNoIn(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->shiftOps(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->shiftExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->additiveExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->multiplicativeExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->unaryOps(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->unaryExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->postfixExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->primaryExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->dollarExpression(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->arrayLiteral(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->objectLiteral(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->propertyNameAndValue(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->propertyName(pLexWhenPredTree)
 *  - void      pLexWhenPredTree->literal(pLexWhenPredTree)
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_LexWhenPredTree_H
#define _LexWhenPredTree_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct LexWhenPredTree_Ctx_struct LexWhenPredTree, * pLexWhenPredTree;



    #include <stdlib.h>
    #include <string.h>
    #include <antlr3.h>
    #include "../emerson/Util.h"; 

    #define APPLEX(s) program_string_lex->append(program_string_lex, s);           


    #ifndef __SIRIKATA_INSIDE_WHEN_PRED__
    #define __SIRIKATA_INSIDE_WHEN_PRED__
    static bool insideWhenPred = false;
    #endif


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/* ========================
 * BACKTRACKING IS ENABLED
 * ========================
 */

/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet() 
 */
 /** Definition of the msgSendStatement scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  LexWhenPredTree_msgSendStatementPush().
 */
typedef struct  LexWhenPredTree_msgSendStatement_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct LexWhenPredTree_msgSendStatement_SCOPE_struct * frame);
    
    /* =============================================================================
     * Programmer defined variables...
     */
    pANTLR3_STRING prev_program_string;
    unsigned int  prev_program_len;
    char* firstExprString;
    char* secondExprString;
    pANTLR3_STRING init_program_string;

    /* End of programmer defined variables
     * =============================================================================
     */
} 
    LexWhenPredTree_msgSendStatement_SCOPE, * pLexWhenPredTree_msgSendStatement_SCOPE;
/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet() 
 */
 /** Definition of the assignmentExpression scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  LexWhenPredTree_assignmentExpressionPush().
 */
typedef struct  LexWhenPredTree_assignmentExpression_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct LexWhenPredTree_assignmentExpression_SCOPE_struct * frame);
    
    /* =============================================================================
     * Programmer defined variables...
     */
    char* op;

    /* End of programmer defined variables
     * =============================================================================
     */
} 
    LexWhenPredTree_assignmentExpression_SCOPE, * pLexWhenPredTree_assignmentExpression_SCOPE;
/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet() 
 */
 /** Definition of the assignmentExpressionNoIn scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  LexWhenPredTree_assignmentExpressionNoInPush().
 */
typedef struct  LexWhenPredTree_assignmentExpressionNoIn_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct LexWhenPredTree_assignmentExpressionNoIn_SCOPE_struct * frame);
    
    /* =============================================================================
     * Programmer defined variables...
     */
    char* op;

    /* End of programmer defined variables
     * =============================================================================
     */
} 
    LexWhenPredTree_assignmentExpressionNoIn_SCOPE, * pLexWhenPredTree_assignmentExpressionNoIn_SCOPE;
/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet() 
 */
 /** Definition of the relationalExpression scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  LexWhenPredTree_relationalExpressionPush().
 */
typedef struct  LexWhenPredTree_relationalExpression_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct LexWhenPredTree_relationalExpression_SCOPE_struct * frame);
    
    /* =============================================================================
     * Programmer defined variables...
     */
    char* op;

    /* End of programmer defined variables
     * =============================================================================
     */
} 
    LexWhenPredTree_relationalExpression_SCOPE, * pLexWhenPredTree_relationalExpression_SCOPE;
/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet() 
 */
 /** Definition of the relationalExpressionNoIn scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  LexWhenPredTree_relationalExpressionNoInPush().
 */
typedef struct  LexWhenPredTree_relationalExpressionNoIn_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct LexWhenPredTree_relationalExpressionNoIn_SCOPE_struct * frame);
    
    /* =============================================================================
     * Programmer defined variables...
     */
    char* op;

    /* End of programmer defined variables
     * =============================================================================
     */
} 
    LexWhenPredTree_relationalExpressionNoIn_SCOPE, * pLexWhenPredTree_relationalExpressionNoIn_SCOPE;
/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet() 
 */
 /** Definition of the shiftExpression scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  LexWhenPredTree_shiftExpressionPush().
 */
typedef struct  LexWhenPredTree_shiftExpression_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct LexWhenPredTree_shiftExpression_SCOPE_struct * frame);
    
    /* =============================================================================
     * Programmer defined variables...
     */
    char* op;

    /* End of programmer defined variables
     * =============================================================================
     */
} 
    LexWhenPredTree_shiftExpression_SCOPE, * pLexWhenPredTree_shiftExpression_SCOPE;

/** Context tracking structure for LexWhenPredTree
 */
struct LexWhenPredTree_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_TREE_PARSER	    pTreeParser;

    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  msgSendStatement stack for use by pLexWhenPredTree_msgSendStatementPush()
     *  and pLexWhenPredTree_msgSendStatementPop()
     */
    pANTLR3_STACK pLexWhenPredTree_msgSendStatementStack;
    ANTLR3_UINT32 pLexWhenPredTree_msgSendStatementStack_limit;
    pLexWhenPredTree_msgSendStatement_SCOPE   (*pLexWhenPredTree_msgSendStatementPush)(struct LexWhenPredTree_Ctx_struct * ctx);
    pLexWhenPredTree_msgSendStatement_SCOPE   pLexWhenPredTree_msgSendStatementTop;
    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  assignmentExpression stack for use by pLexWhenPredTree_assignmentExpressionPush()
     *  and pLexWhenPredTree_assignmentExpressionPop()
     */
    pANTLR3_STACK pLexWhenPredTree_assignmentExpressionStack;
    ANTLR3_UINT32 pLexWhenPredTree_assignmentExpressionStack_limit;
    pLexWhenPredTree_assignmentExpression_SCOPE   (*pLexWhenPredTree_assignmentExpressionPush)(struct LexWhenPredTree_Ctx_struct * ctx);
    pLexWhenPredTree_assignmentExpression_SCOPE   pLexWhenPredTree_assignmentExpressionTop;
    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  assignmentExpressionNoIn stack for use by pLexWhenPredTree_assignmentExpressionNoInPush()
     *  and pLexWhenPredTree_assignmentExpressionNoInPop()
     */
    pANTLR3_STACK pLexWhenPredTree_assignmentExpressionNoInStack;
    ANTLR3_UINT32 pLexWhenPredTree_assignmentExpressionNoInStack_limit;
    pLexWhenPredTree_assignmentExpressionNoIn_SCOPE   (*pLexWhenPredTree_assignmentExpressionNoInPush)(struct LexWhenPredTree_Ctx_struct * ctx);
    pLexWhenPredTree_assignmentExpressionNoIn_SCOPE   pLexWhenPredTree_assignmentExpressionNoInTop;
    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  relationalExpression stack for use by pLexWhenPredTree_relationalExpressionPush()
     *  and pLexWhenPredTree_relationalExpressionPop()
     */
    pANTLR3_STACK pLexWhenPredTree_relationalExpressionStack;
    ANTLR3_UINT32 pLexWhenPredTree_relationalExpressionStack_limit;
    pLexWhenPredTree_relationalExpression_SCOPE   (*pLexWhenPredTree_relationalExpressionPush)(struct LexWhenPredTree_Ctx_struct * ctx);
    pLexWhenPredTree_relationalExpression_SCOPE   pLexWhenPredTree_relationalExpressionTop;
    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  relationalExpressionNoIn stack for use by pLexWhenPredTree_relationalExpressionNoInPush()
     *  and pLexWhenPredTree_relationalExpressionNoInPop()
     */
    pANTLR3_STACK pLexWhenPredTree_relationalExpressionNoInStack;
    ANTLR3_UINT32 pLexWhenPredTree_relationalExpressionNoInStack_limit;
    pLexWhenPredTree_relationalExpressionNoIn_SCOPE   (*pLexWhenPredTree_relationalExpressionNoInPush)(struct LexWhenPredTree_Ctx_struct * ctx);
    pLexWhenPredTree_relationalExpressionNoIn_SCOPE   pLexWhenPredTree_relationalExpressionNoInTop;
    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  shiftExpression stack for use by pLexWhenPredTree_shiftExpressionPush()
     *  and pLexWhenPredTree_shiftExpressionPop()
     */
    pANTLR3_STACK pLexWhenPredTree_shiftExpressionStack;
    ANTLR3_UINT32 pLexWhenPredTree_shiftExpressionStack_limit;
    pLexWhenPredTree_shiftExpression_SCOPE   (*pLexWhenPredTree_shiftExpressionPush)(struct LexWhenPredTree_Ctx_struct * ctx);
    pLexWhenPredTree_shiftExpression_SCOPE   pLexWhenPredTree_shiftExpressionTop;


     pANTLR3_STRING (*program)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*sourceElements)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*sourceElement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*functionDeclaration)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*functionExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*formalParameterList)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*functionBody)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*statement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*statementBlock)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*statementList)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*variableStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*variableDeclarationList)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*variableDeclarationListNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*variableDeclaration)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*variableDeclarationNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*initialiser)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*initialiserNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*expressionStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*ifStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*iterationStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*doWhileStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*whileStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*forStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*forStatementInitialiserPart)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*forInStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*forInStatementInitialiserPart)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*continueStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*breakStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*returnStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*withStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*labelledStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*switchStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*caseBlock)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*caseClause)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*defaultClause)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*throwStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*whenStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*whenPred)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*whenCheckedListFirst)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*whenCheckedListSubsequent)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*tryStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*msgSendStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*msgRecvStatement)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*catchClause)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*finallyClause)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*expression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*expressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*assignmentExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*assignmentExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*leftHandSideExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*newExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*propertyReferenceSuffix1)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*indexSuffix1)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*memberExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*memberExpressionSuffix)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*callExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*callExpressionSuffix)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*arguments)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*indexSuffix)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*propertyReferenceSuffix)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*assignmentOperator)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*conditionalExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*conditionalExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*logicalANDExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*logicalORExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*logicalORExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*logicalANDExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*bitwiseORExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*bitwiseORExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*bitwiseXORExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*bitwiseXORExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*bitwiseANDExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*bitwiseANDExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*equalityExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*equalityExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*relationalOps)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*relationalExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*relationalOpsNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*relationalExpressionNoIn)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*shiftOps)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*shiftExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*additiveExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*multiplicativeExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*unaryOps)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*unaryExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*postfixExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*primaryExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*dollarExpression)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*arrayLiteral)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*objectLiteral)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*propertyNameAndValue)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*propertyName)	(struct LexWhenPredTree_Ctx_struct * ctx);
     void (*literal)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred4_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred39_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred41_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred43_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred50_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred77_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred78_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred81_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred89_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred159_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred167_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred168_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred170_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred171_LexWhenPredTree)	(struct LexWhenPredTree_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct LexWhenPredTree_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pLexWhenPredTree LexWhenPredTreeNew         (pANTLR3_COMMON_TREE_NODE_STREAM instream);
ANTLR3_API pLexWhenPredTree LexWhenPredTreeNewSSD      (pANTLR3_COMMON_TREE_NODE_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the tree parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define T__159      159
#define T__158      158
#define MOD      73
#define T__160      160
#define DO      14
#define LEFT_SHIFT_ASSIGN      45
#define COND_EXPR_NOIN      93
#define NOT      85
#define TRIPLE_SHIFT      68
#define T__167      167
#define T__168      168
#define EOF      -1
#define T__165      165
#define T__166      166
#define T__163      163
#define UNARY_PLUS      82
#define T__164      164
#define T__161      161
#define T__162      162
#define SingleStringCharacter      104
#define T__148      148
#define T__147      147
#define T__149      149
#define INSTANCE_OF      64
#define RETURN      23
#define UnicodeLetter      119
#define WhiteSpace      125
#define MESSAGE_SEND      96
#define T__154      154
#define T__155      155
#define T__156      156
#define T__157      157
#define T__150      150
#define T__151      151
#define T__152      152
#define UnicodeCombiningMark      122
#define T__153      153
#define T__139      139
#define LTERM      99
#define T__138      138
#define T__137      137
#define UnicodeDigit      120
#define T__136      136
#define NumericLiteral      102
#define UNARY_MINUS      83
#define DoubleStringCharacter      103
#define T__141      141
#define T__142      142
#define T__140      140
#define T__145      145
#define T__146      146
#define T__143      143
#define T__144      144
#define T__126      126
#define T__128      128
#define T__127      127
#define T__129      129
#define TYPEOF      79
#define COND_EXPR      92
#define LESS_THAN      60
#define COMPLEMENT      84
#define NAME_VALUE      76
#define LEFT_SHIFT      66
#define CALL      5
#define CharacterEscapeSequence      106
#define T__130      130
#define T__131      131
#define T__132      132
#define T__133      133
#define T__134      134
#define T__135      135
#define PLUSPLUS      80
#define SUB      70
#define NOT_EQUALS      57
#define HexDigit      113
#define PAREN      98
#define T__202      202
#define T__203      203
#define T__204      204
#define T__205      205
#define WHEN_CHECKED_LIST_SUBSEQUENT      28
#define RIGHT_SHIFT_ASSIGN      46
#define ARRAY_INDEX      6
#define SLIST      9
#define IDENT      58
#define ADD      69
#define GREATER_THAN      61
#define EXP_ASSIGN      49
#define UnicodeEscapeSequence      108
#define FUNC_DECL      88
#define NOT_IDENT      59
#define StringLiteral      101
#define OR_ASSIGN      50
#define FORCOND      18
#define WHEN      26
#define HexIntegerLiteral      115
#define NonEscapeCharacter      110
#define LESS_THAN_EQUAL      62
#define DOLLAR_EXPRESSION      30
#define DIV      72
#define SUB_ASSIGN      44
#define WHEN_PRED      29
#define OBJ_LITERAL      75
#define WHILE      15
#define MOD_ASSIGN      42
#define CASE      37
#define NEW      25
#define MINUSMINUS      81
#define ARGLIST      90
#define EQUALS      56
#define ARRAY_LITERAL      74
#define DecimalDigit      112
#define FUNC_EXPR      89
#define DIV_ASSIGN      41
#define BREAK      21
#define Identifier      100
#define BIT_OR      53
#define Comment      123
#define EXP      54
#define SingleEscapeCharacter      109
#define WHEN_CHECKED_LIST_FIRST      27
#define ExponentPart      116
#define VAR      12
#define VOID      78
#define FORINIT      17
#define GREATER_THAN_EQUAL      63
#define ADD_ASSIGN      43
#define SWITCH      36
#define IdentifierStart      117
#define FUNC_PARAMS      87
#define LEFT_SHIFT_ASSIG      206
#define DELETE      77
#define MULT      71
#define EMPTY_FUNC_BODY      95
#define TRY      31
#define T__200      200
#define T__201      201
#define FUNC      8
#define OR      51
#define VARLIST      11
#define CATCH      33
#define MESSAGE_RECV      97
#define EscapeSequence      105
#define THROW      32
#define UnicodeConnectorPunctuation      121
#define BIT_AND      55
#define HexEscapeSequence      107
#define MULT_ASSIGN      40
#define LineComment      124
#define FOR      16
#define AND      52
#define AND_ASSIGN      48
#define IF      10
#define EXPR_LIST      91
#define T__199      199
#define T__198      198
#define PROG      13
#define T__197      197
#define T__196      196
#define IN      65
#define T__195      195
#define T__194      194
#define T__193      193
#define CONTINUE      22
#define T__192      192
#define T__191      191
#define T__190      190
#define FORITER      19
#define RIGHT_SHIFT      67
#define EscapeCharacter      111
#define UNDEF      4
#define DOT      7
#define TERNARYOP      94
#define IdentifierPart      118
#define WITH      24
#define T__184      184
#define T__183      183
#define T__186      186
#define T__185      185
#define T__188      188
#define T__187      187
#define T__189      189
#define T__180      180
#define T__182      182
#define DEFAULT      35
#define POSTEXPR      86
#define T__181      181
#define TRIPLE_SHIFT_ASSIGN      47
#define FORIN      20
#define DecimalLiteral      114
#define T__175      175
#define T__174      174
#define T__173      173
#define T__172      172
#define T__179      179
#define T__178      178
#define T__177      177
#define FINALLY      34
#define T__176      176
#define LABEL      38
#define T__171      171
#define T__170      170
#define ASSIGN      39
#define T__169      169
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for LexWhenPredTree
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */